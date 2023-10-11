#include "function_pointers.h"

/*
*Check if the name is NULL.
*Check if the function pointer is NULL.
*Call the function pointer with the name as the argument.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
	return;
	}

	f(name);
}

