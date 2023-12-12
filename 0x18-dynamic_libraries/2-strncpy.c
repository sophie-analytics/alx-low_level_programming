#include "main.h"

/**
 * _strncpy - A function'
 * @dest: The destination
 * @src: The source
 * @n: The integer it takes
 * Return: The result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *result = dest;

	for (i = 0; i < n && *src != '\0'; i++)
{
	*dest = *src;
	dest++;
	src++;
}
	for (; i < n; i++)
{
	*dest = '\0';
	dest++;
}
	return (result);
}
