#include <unistd.h>
#include "main.h"

/**
 * _strchr - A function
 * @s: The string
 * @c: The character
 * Return: The result
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
{
	if (s[i] == c)
{
	while (s[i] != '\0')
{
	write(1, &s[i], 1);
	i++;
}
	write(1, "\n", 1);
}
	i++;
}
	return (NULL);
}
