#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Check for memory allocation success
 * @b: The value it takes
 * *exit*: The exit status
 */
void *malloc_checked(unsigned int b)
{
	void *allocated_memory;

	allocated_memory = malloc(b);
	if (allocated_memory == NULL)
{
	exit(98);
}
	return (allocated_memory);
}
