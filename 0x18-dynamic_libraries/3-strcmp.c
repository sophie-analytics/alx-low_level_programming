#include "main.h"

/**
 * _strcmp - The function
 * @s1: the first string
 * @s2: the second string
 * Return: the result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
{
	s1++;
	s2++;
}
	return (*s1 - *s2);
}
