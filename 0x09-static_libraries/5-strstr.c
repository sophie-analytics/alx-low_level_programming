#include "main.h"
#include <stddef.h>

/**
 * _strstr - A function
 * @haystack: The string
 * @needle: The string
 * Return: The result
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
{
	char *start = haystack;
	char *sub = needle;

	while (*sub != '\0' && *haystack == *sub)
{
	haystack++;
	sub++;
}
	if (*sub == '\0')
{
	return (start);
}
	haystack = start + 1;
}
	return (NULL);
}
