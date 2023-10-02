#include "main.h"

/**
 * _memcpy - A function
 * @dest: The destination
 * @src: The source
 * @n: The integer
 * Return: The result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *result = dest;

	while (n > 0)
{
	*dest = *src;
	dest++;
	src++;
	n--;
}
	return (result);
}
