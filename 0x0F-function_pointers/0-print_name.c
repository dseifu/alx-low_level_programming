#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: arg of function
 * @f: a pointer to a function
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
