#include "main.h"

/**
 * string_toupper - A function
 * @str: the string
 * Return: The result
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
{
	if (*str >= 'a' && *str <= 'z')
{
	*str = *str - 32;
}
	str++;
}
	return (ptr);
}
