/* ===== Definition Section ===== */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
static int linenumber = 1;
static int nesting = 0;

%}

%union {char* str;
  int ival;
  double dval;
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

%type <str> var_type

%nonassoc "noelse"
%nonassoc ELSE

%start program

%%

/* ==== Grammar Section ==== */

/* Productions */               /* Semantic actions */
program		: { init_all(); } global_decl_list { print_vars(); print_types(); }
		;

global_decl_list: global_decl_list global_decl
                |
		;

global_decl	: VOID ID MK_LPAREN func_param_list MK_RPAREN block
		| var_type ID func_or_var
		| TYPEDEF var_type ID MK_SEMICOLON
		| struct
		;

func_or_var : MK_LPAREN func_param_list MK_RPAREN block
		| MK_LPAREN func_param_list MK_RPAREN MK_SEMICOLON
		| after_ID assign_list MK_SEMICOLON
		| assign_list MK_SEMICOLON
		;

func_param_list: func_param
		| func_param_list MK_COMMA func_param
		|
		;

func_param: var_type ID func_array_dim { add_var ( $1, $2, nesting+1 ); }
		;

func_array_dim:  MK_LB MK_RB func_array_dim
		|  MK_LB CONST MK_RB func_array_dim
		|
		;

var_type: INT {$$=$1;}| FLOAT {$$=$1;} /*| CONST INT | CONST FLOAT */
		;

after_ID: MK_LB CONST MK_RB array_dim
		| OP_ASSIGN CONST 
		;

array_dim: MK_LB CONST MK_RB array_dim
		|
		;
		
assign_list: MK_COMMA ID assign_list
		| MK_COMMA ID after_ID assign_list
		|
		;

block: MK_LBRACE {nesting++;} statement_block_list MK_RBRACE {nesting--;}
		;

statement_block_list: statement_block statement_block_list
		|
		;

statement_block: var_dcl 
		| variable operand expression MK_SEMICOLON 
		| MK_LBRACE {nesting++;} statement_block_list MK_RBRACE {nesting--;}
		| ID MK_LPAREN expr_list MK_RPAREN MK_SEMICOLON
		| IF MK_LPAREN expression MK_RPAREN {nesting++;} statement_block {nesting--;} else_block
		| WHILE MK_LPAREN expression MK_RPAREN {nesting++;} statement_block {nesting--;}
		| FOR MK_LPAREN exp_or_non MK_SEMICOLON exp_or_non MK_SEMICOLON exp_or_non MK_RPAREN {nesting++;} statement_block {nesting--;}
		| RETURN MK_SEMICOLON
		| RETURN expression MK_SEMICOLON
		| TYPEDEF var_type ID MK_SEMICOLON
		| struct
		| MK_SEMICOLON 
		;

else_block: ELSE {nesting++;} statement_block {nesting--;} 
		| %prec "noelse"
		;

exp_or_non: expression
		|
		;
		
var_dcl: var_or_id ID after_ID assign_list MK_SEMICOLON
		| var_or_id ID assign_list MK_SEMICOLON
		;

var_or_id: var_type
		| ID
		;
		
expression : variable primary
		| CONST primary
		| variable MK_LPAREN expr_list MK_RPAREN primary
		| MK_LPAREN expression MK_RPAREN primary
		| OP_NOT expression
		| OP_MINUS expression
		;

primary: operand expression
		|
		;

expr_list: expression
		|	expression MK_COMMA expr_list
		|
		;

variable: ID variable_list
		| ID MK_LB expression MK_RB	array_dim_exp variable_list
		;
		
variable_list: MK_DOT variable
		|
		;
				
array_dim_exp: MK_LB expression MK_RB	array_dim_exp
		|
		;
		
operand : OP_AND
		| OP_OR
		| OP_EQ
		| OP_NE
		| OP_LT
		| OP_GT
		| OP_LE
		| OP_GE
		| OP_PLUS
		| OP_MINUS
		| OP_TIMES
		| OP_DIVIDE	
		| OP_ASSIGN			
		;

id_or_non: ID
		|
		;

struct : STRUCT id_or_non MK_LBRACE struct_dclr_list MK_RBRACE struct_list MK_SEMICOLON
		| STRUCT ID struct_list MK_SEMICOLON
		;
		
struct_dclr_list: var_dcl_struct struct_dclr_list
		| struct struct_dclr_list
		|
		;		

var_dcl_struct: var_or_id ID after_ID_struct assign_list_struct MK_SEMICOLON
		| var_or_id ID assign_list_struct MK_SEMICOLON
		;

after_ID_struct: MK_LB CONST MK_RB array_dim
		;

assign_list_struct: MK_COMMA ID assign_list_struct
		| MK_COMMA ID after_ID_struct assign_list_struct
		|
		;

struct_list: ID assign_list_struct
		|
		;
		
%%

#include "lex.yy.c"
main (argc, argv)
int argc;
char *argv[];
  {
     	yyin = fopen(argv[1],"r");
     	yyparse();
     	printf("%s\n", "Parsing completed. No errors found.");
  } 


yyerror (mesg)
char *mesg;
{
	printf("%s\t%d\t%s\t%s\n", "Error found in Line ", linenumber, "next token: ", yytext );
  	printf("%s\n", mesg);
  	exit(1);
}
