#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Changes the value of a bit to 0 at an index
 * @n: The number to put
 * @index: The position of the number to be changed
 * Return: 1 for success or -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);

	return (1);
}
