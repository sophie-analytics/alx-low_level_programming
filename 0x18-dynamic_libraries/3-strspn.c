#include <stdio.h>

/**
 * _strspn - A function
 * @s: The string
 * @accept: The string
 * Return: The result
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
{
	char *temp = accept;

	while (*temp != '\0')
{
	if (*s == *temp)
{
	count++;
	break;
}
	temp++;
}
	if (*temp == '\0')
{
	break;
}
	s++;
}
	return (count);
}
