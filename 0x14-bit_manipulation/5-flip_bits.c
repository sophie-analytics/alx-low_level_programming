#include "main.h"

/**
 * flip_bits -  function that return the no of bit to swap to get another no
 * @n: The number to put
 * @m: The number the result will give
 * Return: The no of bits to swap
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);

}
