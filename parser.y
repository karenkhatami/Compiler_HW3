/* ===== Definition Section ===== */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nesting.h"
#include "symbol_tables.h"
#include "semantic_routines.h"

%}

%union {char* str;
  int ival;
  double dval;
  id_list_t *ID_List;
  param_list_t *Param_List;
}

%token <str> ID
%token CONST
%token <str> VOID    
%token <str> INT     
%token <str> FLOAT   
%token IF      
%token ELSE    
%token WHILE   
%token FOR
%token STRUCT  
%token TYPEDEF 
%token OP_ASSIGN  
%token OP_OR   
%token OP_AND  
%token OP_NOT  
%token OP_EQ   
%token OP_NE   
%token OP_GT   
%token OP_LT   
%token OP_GE   
%token OP_LE   
%token OP_PLUS 
%token OP_MINUS        
%token OP_TIMES        
%token OP_DIVIDE       
%token MK_LB 
%token MK_RB 
%token MK_LPAREN       
%token MK_RPAREN       
%token MK_LBRACE       
%token MK_RBRACE       
%token MK_COMMA        
%token MK_SEMICOLON    
%token MK_DOT  
%token ERROR
%token RETURN

%start program

%type <str> type
%type <ID_List> init_id_list
%type <ID_List> init_id
%type <ID_List> id_list
%type <Param_List> param_list
%type <Param_List> param
%type <ival> dim_decl
%type <ival> dim_fn
%type <ival> dimfn1
%type <ival> relop_expr_list
%type <ival> nonempty_relop_expr_list

%%

/* ==== Grammar Section ==== */

/* Productions */               /* Semantic actions */
program		: { init_all(); } global_decl_list { print_vars(); print_types(); print_funcs();}
		;

global_decl_list: global_decl_list global_decl
                |
		;

global_decl	: decl_list function_decl
		| function_decl
		;

function_decl	: type ID MK_LPAREN param_list MK_RPAREN MK_LBRACE {func_decl($1, $2, $4); inc_nesting();} block MK_RBRACE{dec_nesting();}
		/* | Other function_decl productions */
                /*Empty parameter list.*/
		| type ID MK_LPAREN MK_RPAREN MK_LBRACE {func_decl($1, $2, NULL); inc_nesting();} block MK_RBRACE {dec_nesting();}
                /*Function declarations. The above ones are function definitions*/
		| type ID MK_LPAREN param_list MK_RPAREN MK_SEMICOLON {func_decl($1, $2, $4);}
		| type ID MK_LPAREN MK_RPAREN MK_SEMICOLON {func_decl($1, $2, NULL);}
		;

param_list	: param_list MK_COMMA  param { $$->next=$3; }
		| param	
		;

param		: type ID { $$=func_param_decl ( $1, $2, 0, get_nesting()+1 ); }
		| struct_type ID { $$=NULL; }
		| type ID dim_fn { $$=func_param_decl ( $1, $2, $3, get_nesting()+1 ); }
		| struct_type ID dim_fn { $$=NULL; }
		;

dim_fn		:MK_LB expr_null MK_RB dimfn1 {$$=$4+1;}
		;

dimfn1		:MK_LB expr MK_RB dimfn1 {$$=$4+1;}
		| {$$=0;}
		;

expr_null	:expr
		|
		;

block           : decl_list stmt_list 
                | stmt_list
                | decl_list
                | 
                ;
 
decl_list	: decl_list decl
		| decl
		;

decl		: type_decl
		| var_decl
		;

type_decl 	: TYPEDEF type id_list MK_SEMICOLON { type_def($2, $3, get_nesting()); }
		| TYPEDEF VOID id_list MK_SEMICOLON  { type_def($2, $3, get_nesting()); }
		| TYPEDEF struct_type id_list MK_SEMICOLON
		| struct_type MK_SEMICOLON
		;

var_decl	: type init_id_list MK_SEMICOLON { add_var_list($1, $2, get_nesting()); }
		| struct_type id_list MK_SEMICOLON
		| ID id_list MK_SEMICOLON 
		;

/* Suppported types. */
type		: INT {$$=$1;}
		| FLOAT {$$=$1;}
		| VOID {$$=$1;}
        	|error{$$="error";}
		;

struct_type	: STRUCT tag
		;

/* Struct variable body. */
tag		: ID MK_LBRACE decl_list MK_RBRACE
		| MK_LBRACE decl_list MK_RBRACE
		| ID MK_LBRACE MK_RBRACE
		| MK_LBRACE MK_RBRACE
		| ID
		;


id_list		: ID { $$=var_decl($1, 0); }
		| id_list MK_COMMA ID { $$=var_decl($3, 0); $$->next=$1; }
		| id_list MK_COMMA ID dim_decl { $$=var_decl($3, $4); $$->next=$1; }
		| ID dim_decl { $$=var_decl($1, $2); }
		;
dim_decl	: MK_LB cexpr MK_RB {$$=1;}
		| dim_decl MK_LB cexpr MK_RB {$$=$1+1;}
		;
cexpr		: cexpr add_op mcexpr
		| mcexpr
		;  
mcexpr		: mcexpr mul_op cfactor
		| cfactor 
		;

cfactor:	CONST 
		| MK_LPAREN cexpr MK_RPAREN
		;

init_id_list	: init_id {$$=$1;}
		| init_id_list MK_COMMA init_id { $3->next=$1 ; $$=$3; }
		;

init_id		: ID { $$=var_decl($1, 0); }
		| ID dim_decl { $$=var_decl($1, $2); }
		| ID OP_ASSIGN relop_expr { $$=var_decl($1, 0); }
		;

stmt_list	: stmt_list stmt
		| stmt
		;

stmt		: MK_LBRACE{inc_nesting();} block MK_RBRACE{dec_nesting();}
		/* | While Statement here */
		| WHILE MK_LPAREN relop_expr_list MK_RPAREN stmt
	        | FOR MK_LPAREN assign_expr_list MK_SEMICOLON relop_expr_list MK_SEMICOLON assign_expr_list MK_RPAREN stmt 
		/* | If then else here */ 
		| IF MK_LPAREN relop_expr MK_RPAREN stmt ELSE stmt
		/* | If statement here */ 
		| IF MK_LPAREN relop_expr MK_RPAREN stmt 
		/* | read and write library calls -- note that read/write are not keywords */ 
		| function_call
		| var_ref OP_ASSIGN relop_expr MK_SEMICOLON 
		| relop_expr_list MK_SEMICOLON
		| MK_SEMICOLON
		| RETURN MK_SEMICOLON
		| RETURN relop_expr MK_SEMICOLON
		;

function_call    : ID MK_LPAREN relop_expr_list MK_RPAREN { check_func_call( $1, $3 ); }
                 ;

assign_expr_list : nonempty_assign_expr_list
                |
                ;

nonempty_assign_expr_list        : nonempty_assign_expr_list MK_COMMA assign_expr
                | assign_expr

assign_expr     : ID {process_id($1);} OP_ASSIGN relop_expr 
                | relop_expr


relop_expr	: relop_term
		| relop_expr OP_OR relop_term
		;

relop_term	: relop_factor
		| relop_term OP_AND relop_factor
		;

relop_factor	: expr
		| expr rel_op expr
		;

/* Relational operators added.*/
rel_op		: OP_LT
		| OP_LE
		| OP_GT
		| OP_GE
		| OP_EQ
		| OP_NE
		;

relop_expr_list	: nonempty_relop_expr_list { $$=$1; }
		| 
		;

nonempty_relop_expr_list	: nonempty_relop_expr_list MK_COMMA relop_expr { $$ = $1 + 1; }
		| relop_expr { $$ = 1; }
		;

expr		: expr add_op term
		| term
		;

add_op		: OP_PLUS
		| OP_MINUS
		;

term		: term mul_op factor
		| factor
		;

mul_op		: OP_TIMES
		| OP_DIVIDE
		;

factor		: MK_LPAREN relop_expr MK_RPAREN
		/* | -(<relop_expr>) */ 
		| OP_NOT MK_LPAREN relop_expr MK_RPAREN
                /* OP_MINUS condition added as C could have a condition like: "if(-(i < 10))".	*/		
		| OP_MINUS MK_LPAREN relop_expr MK_RPAREN
		| CONST	
		/* | - constant, here - is an Unary operator */ 
		| OP_NOT CONST
                /*OP_MINUS condition added as C could have a condition like: "if(-10)".	*/		
		| OP_MINUS CONST
		| function_call
		/* | - func ( <relop_expr_list> ) */ 
		| OP_NOT ID {process_id($2);} MK_LPAREN relop_expr_list MK_RPAREN
                /* OP_MINUS condition added as C could have a condition like: "if(-read(i))".	*/	
		| OP_MINUS ID {process_id($2);} MK_LPAREN relop_expr_list MK_RPAREN
		| var_ref
		/* | - var-reference */ 
		| OP_NOT var_ref
                /* OP_MINUS condition added as C could have a condition like: "if(-a)".	*/	
		| OP_MINUS var_ref
		;

var_ref		: ID {process_id($1);}
		| var_ref dim
		| var_ref struct_tail
		;


dim		: MK_LB expr MK_RB
		;

struct_tail	: MK_DOT ID 
		;
%%
#include "lex.yy.c"

int scope = 0;

int main (int argc, char *argv[])
{
	int errors_found = 0;
    //init_symtab();
    if(argc>0)
        yyin = fopen(argv[1],"r");
    else
        yyin=stdin;
    yyparse();
	if( (errors_found=get_errors())==0 )
	{
    	printf("%s\n", "Parsing completed. No errors found.");
	}
	else
	{
		printf("Parsing completed. %d errors found.\n", errors_found);
	}
    //cleanup_symtab();
    return 0;
} /* main */


yyerror (mesg)
char *mesg;
  {
      printf("%s\t%d\t%s\t%s\n", "Error found in Line ", get_linenumber(), "next token: ", yytext );
      printf("%s\n", mesg);
      exit(1);
  }
