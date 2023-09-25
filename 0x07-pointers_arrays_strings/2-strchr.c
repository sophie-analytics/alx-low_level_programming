#include <stddef.h>
#include "main.h"

/**
 * _strchr - A function
 * @s: The string
 * @c: The character
 * Return: The result
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
{
	if (*s == c)
{
	return (s);
}
	s++;
}
	return (NULL);
}
