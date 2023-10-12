#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Function that prints the name
 * @name: The string it takes
 * @f: The pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	f(name);
	}
}
