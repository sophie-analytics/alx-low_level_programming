#include "main.h"

/**
 * set_bit - Changes the value of a bit at an index
 * @n: The number to put
 * @index: The position of the number to be changed
 * Return: 1 for success or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	bit = 1 << index;
	*n = *n | bit;

	return (1);
}
