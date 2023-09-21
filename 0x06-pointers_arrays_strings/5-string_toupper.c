#include "main.h"

/**
 * string_toupper - A function
 * @s: the string
 * Return: The result
 */
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*s != '\0')
{
	if (*s >= 'a' && *s <= 'z')
{
	s = s - 'a' + 'A';
}
	s++;
}
	return (ptr);
}
