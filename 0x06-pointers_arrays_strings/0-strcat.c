#include "main.h"

/**
 * _strcat - A function
 * @dest: The detination of the concatination
 * @src: The source
 * Return: The result
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
{
	dest++;
}
	while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = '\0';

	return (result);
}
