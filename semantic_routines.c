#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "nesting.h"
#include "symbol_tables.h"
#include "semantic_routines.h"


//======================================================
//------------------   FUNC DEFS    --------------------
//======================================================
id_list_t *var_decl (char* name, int dim)
{
	// Check if variable already exists in current nesting level
	var_t *existing_var = find_var( name );
	if( existing_var != NULL && existing_var->nest_level==get_nesting() )
	{
		print_current_line();
		printf( "\tID (%s) redeclared.\n", name );
		inc_errors();
	}
	return newIDnode( name, dim );
}

void process_id( char *name )
{
	// Check if id is declared
	var_t *existing_var = find_var( name );
	if( existing_var == NULL )
	{
		print_current_line();
		printf( "\tID (%s) undeclared.\n", name );
		inc_errors();
	}
}

param_list_t *func_param_decl (char* type, char* name, int dim, int nest_level)
{
	add_var(type, name, dim, nest_level);
	return newParamNode(type, name, dim, nest_level);
}

void func_decl ( char *type, char *name, param_list_t *params )
{

	func_t* func_pointer = find_func( name );
	
	if ( func_pointer != NULL ) {
		print_current_line();
		printf( "\tFunc ID (%s) redeclared.\n", name );
		inc_errors();
	}
	else
		add_func ( type, name, params );
}

param_list_t *struct_param_decl (char* type, char* name, int dim, int nest_level)
{
	return newParamNode(type, name, dim, nest_level);
}

void struct_decl ( char *name, param_list_t *params )
{
	add_struct ( name, params );
}

type_t check_func_call ( char *name, int param_count ) {

	//looking for the function name
	func_t* func_pointer = find_func( name );

	type_t return_type;
	
	if ( func_pointer == NULL ) {
		print_current_line();
		printf( "\tFunc ID (%s) undeclared.\n", name );
		inc_errors();
		
	}
	else {
	
		strcpy(return_type.real_type, func_pointer->type);
	
		param_list_t *temp_param_pointer = func_pointer->params;
		int count = 1;
		while ( temp_param_pointer->next != NULL ) {
			count++;
			temp_param_pointer = temp_param_pointer->next;
		}
	
		if ( count < param_count ) {
			print_current_line();
			printf( "\ttoo many arguments to function (%s)\n", name );
			inc_errors();
		}
		else if ( count > param_count ) {
			print_current_line();
			printf( "\ttoo few arguments to function (%s)\n", name );
			inc_errors();
		}

	}

	return return_type;
	
}

type_t check_id_type( char *name )
{
	// Check if id is declared
	var_t *existing_var = find_var( name );
	type_t return_type;
	
	if ( existing_var != NULL ) {
		strcpy(return_type.real_type, existing_var->type);
		strcpy(return_type.name, existing_var->name);
	}
	else {
		strcpy(return_type.real_type, "#$%");
		strcpy(return_type.name, "#$%");
	}
		
	return return_type;
	
}

void check_op_types ( type_t a, type_t b) {
}

void check_func_return ( type_t ret_type ) {

	//looking for the function name
	func_t* func_pointer = find_last_func( );

	if ( (strcmp(ret_type.real_type,"int")==0) || (strcmp(ret_type.real_type,"float")==0) ) {
		if ( (strcmp(func_pointer->type,"int")!=0) && (strcmp(func_pointer->type,"float")!=0) ) {
			print_current_line();
			printf( "\tIncompatible return type.\n" );
			inc_errors();

		}
	}
	//TODO check the struct type!!
	else if ( strcmp(ret_type.real_type,"int")!=0 ) {
		print_current_line();
		printf( "\tIncompatible return type.\n" );
		inc_errors();
	}

}

void check_array_dimmension ( type_t id ) {

	var_t *existing_var = find_var( id.name );
	if ( (existing_var != NULL) && (existing_var->dim != id.param_count) ) {
		print_current_line();
		if ( existing_var->dim == 0 )
			printf( "\tArray (%s) passed to scalar parameter.\n", id.name );
		else if ( id.param_count == 0 )
			printf( "\tScalar (%s) passed to array parameter.\n", id.name );

		else
			printf( "\tIncompatible array dimensions.\n" );
		inc_errors();
	}
}		

void check_dim_type ( type_t dim_type ) {

	if ( strcmp(dim_type.real_type,"int") != 0 ) {
		print_current_line();
		printf( "\tArray subscript is not an integer\n" );
		inc_errors();
	}
}		

