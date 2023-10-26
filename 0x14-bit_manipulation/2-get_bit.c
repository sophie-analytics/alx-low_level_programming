#include "main.h"

/**
 * get_bit - Calculates the value of a bit
 * @n: The number it takes
 * @index: The starting point of the number
 * Return: The value of the bit at the index or -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int base, number;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	base = 1 << index;
	number = n & base;
	if (number == base)
	{
		return (1);
	}
	return (0);
}
