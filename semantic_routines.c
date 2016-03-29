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

void check_func_call ( char *name, int param_count ) {

	//looking for the function name
	func_t* func_pointer = find_func( name );
	
	if ( func_pointer == NULL ) {
		print_current_line();
		printf( "\tFunc ID (%s) undeclared.\n", name );
		inc_errors();
	}
	else {
	
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
	
}
