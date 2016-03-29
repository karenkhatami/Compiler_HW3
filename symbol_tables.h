#ifndef SYMBOL_TABLES_H
#define SYMBOL_TABLES_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct id_list {
	char name[256];
	struct id_list *next;
	int dim;
} id_list_t;

typedef struct var {
	char name[256];
	char type[256];
	int nest_level;
	int dim;
	struct var *next;
} var_t;

typedef struct type {
	char name[256];
	int nest_level;
	struct type *next;
	char real_type[256];
	int param_count; //for number of function params or array dimmension
	int dim_count_struct;
} type_t;

typedef struct param_list {
	var_t param;
	struct param_list *next;
} param_list_t;

typedef struct func {
	char name[256];
	char type[256];
	param_list_t *params;
	struct func *next;
} func_t;

typedef struct decl_list {
	var_t var;
	struct decl_list *next;
} decl_list_t;

typedef struct structs {
	char name[256];
	decl_list_t *members;
	struct structs *next;
} structs_t;

//======================================================
//------------------   FUNC PROTOTYPES    --------------
//======================================================

void print_vars();

void add_var ( char *type, char *name, int dim, int nest_level );

void pop_vars ( int nest_level );

void cleanup_idlist ( id_list_t *head );

var_t* find_var( char *name );

decl_list_t *get_vars_nest( int nest_level );

id_list_t *newIDnode(char* name, int dim);

void init_types ();

void print_types ();

void type_def ( char *type, id_list_t *head, int nest_level );

void pop_types ( int nest_level );

void init_all();

char *get_real_type( char *type );

void add_func ( char *type, char *name, param_list_t *params );

func_t* find_func( char *name );

func_t* find_last_func( );

int get_num_params( func_t *func );

type_t check_func_call ( char *name, int param_count );

type_t check_id_type( char *name );

void check_op_types ( type_t a, type_t b);

void check_func_return ( type_t ret_type );

void check_array_dimmension ( type_t id );

void check_dim_type ( type_t dim_type );

param_list_t *newParamNode(char* type, char* name, int dim, int nest_level);

void print_funcs();

void add_struct ( char *name, decl_list_t *params );

structs_t* find_struct( char *name );

void print_structs();

char *build_struct_type( char *name );

char *get_random_name();

decl_list_t *id_list_to_decl_list( char *type, id_list_t *id_list, int nest_level );

void lappend_decl_list_to_var( decl_list_t *decl_list );

decl_list_t *cat_decl_lists( decl_list_t *list1, decl_list_t *list2 );

structs_t *find_struct( char *name );

decl_list_t *find_struct_member( structs_t *var_struct, char *name );

#endif //symbol_tables.h_
