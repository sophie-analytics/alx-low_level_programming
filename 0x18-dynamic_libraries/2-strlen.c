#include "main.h"

/**
 * _strlen - funtion that act as a len function
 * @s: the string it takes
 * Return: the value of length
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
{

	length++;
	s++;
}
	return (length);
}
