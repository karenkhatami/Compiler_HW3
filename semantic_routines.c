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
	add_func ( type, name, params );
}

param_list_t *struct_param_decl (char* type, char* name, int dim, int nest_level)
{
	return newParamNode(type, name, dim, nest_level);
}

void struct_decl ( char *name )
{
	decl_list_t *members=NULL;
	decl_list_t *member_pointer=NULL;
	decl_list_t *member_pointer_2=NULL;
	char *struct_type_name=NULL;
	id_list_t *struct_var = (id_list_t *)malloc(sizeof(id_list_t));

	struct_type_name = build_struct_type( name ); // struct type is 'struct name'

	// The members of the struct are all the variable definitions in the current nesting level
	members = get_vars_nest( get_nesting() );

	// Check for duplicate members
	member_pointer = members;
	member_pointer_2 = members;
	while( member_pointer!=NULL )
	{
		member_pointer_2 = member_pointer->next;
		while( member_pointer_2!=NULL )
		{
			if( strcmp( member_pointer->var.name, member_pointer_2->var.name )==0 )
			{
				printf("In struct '%s' line %d:\n", name, get_linenumber() );
				printf( "\tDuplicate member (%s).\n", member_pointer->var.name );
			}
			member_pointer_2 = member_pointer_2->next;
		}
		member_pointer = member_pointer->next;
	}
				
	// Check for reference to struct inside struct
	member_pointer = members;
	while( member_pointer!=NULL )
	{
		if( strcmp( member_pointer->var.type, struct_type_name ) == 0 )
		{
			printf("In struct '%s' line %d:\n", name, get_linenumber() );
			printf( "\tfield (%s) has incomplete type.\n", member_pointer->var.name );
			inc_errors();
		}
		member_pointer = member_pointer->next;
	}

	// Finally add new struct to linked list
	add_struct ( name, members );

	// Add struct as a new type
	strcpy(struct_var->name, struct_type_name);
	struct_var->dim = 0; 
	struct_var->next = NULL;
	type_def( name, struct_var, get_nesting()-1 );
}

void struct_ref ( char *struct_var_name, char *member_name )
{
	var_t *existing_var=NULL;
	char *var_type=NULL;
	structs_t *var_struct=NULL;
	decl_list_t *struct_member=NULL;
	

	// check that variable is defined
	existing_var = find_var( struct_var_name );
	if( existing_var == NULL )
	{
		print_current_line();
		printf( "\tID (%s) redeclared.\n", struct_var_name );
		inc_errors();
	}

	// get the struct name (it's the real type in type definitions)
	var_type = get_real_type( existing_var->type );
	if( var_type==NULL )
	{
		print_current_line();
		printf( "\tID (%s) type undefined.\n", struct_var_name );
		inc_errors();
	}

	var_struct = find_struct( var_type );
	if( var_struct==NULL )
	{
		print_current_line();
		printf( "\tID (%s) struct undefined.\n", struct_var_name );
		inc_errors();
	}

	struct_member = find_struct_member( var_struct, member_name );
	if( struct_member==NULL )
	{
		print_current_line();
		printf( "\tStructure has no member named (%s).\n", member_name );
		inc_errors();
	}
}
