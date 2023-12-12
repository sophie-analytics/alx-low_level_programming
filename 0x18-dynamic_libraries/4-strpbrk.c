#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - A function
 * @s: The string
 * @accept: The string
 * Return: The result
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
{
	char *temp = accept;

	while (*temp != '\0')
{
	if (*s == *temp)
{
	return (s);
}
	temp++;
}
	s++;
}
	return (NULL);
}
