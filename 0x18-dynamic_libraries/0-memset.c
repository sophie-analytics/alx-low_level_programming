#include "main.h"

/**
 * _memset - A function
 * @s: The string
 * @b: The replacement
 * @n: The integer
 * Return: The result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
{
	s[i] = b;
	i++;
}
	return (s);
}
