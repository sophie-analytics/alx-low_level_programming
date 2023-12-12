#include "main.h"

/**
 * _strncat - A function for concatnation
 * @dest: The destination of the string
 * @src: The source of the string
 * @n: The integer it takes
 * Return: The result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *result = dest;

	while (*dest != '\0')
{
	dest++;
}
	for (i = 0; i < n && src[i] != '\0'; i++)
{
	*dest = src[i];
	dest++;
}
	*dest = '\0';
	return (result);
}
