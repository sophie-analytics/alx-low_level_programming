#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - Function that converts a binary no to an unsigned int
 * @b: The no it takes
 * Return: The unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;
	int string_length;

	if (b == NULL)
	{
		return (0);
	}

	string_length = strlen(b);

	for (i = 0; i < string_length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		sum = (sum << 1) + (b[i] - '0');
	}
	return (sum);
}
