#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name with text depends on function
 *
 * @name: name that want to show
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
