#include "main.h"

/**
 * leet - A Function
 * @str: the string
 * Return: The result
 */
char *leet(char *str)
{
	int i;
	char *ptr = str;
	char *leet_char = "aAeEoOtTlL";
	char *leet_replace = "4433007711";

	i = 0;
	while (*str != '\0')
{
	while (leet_char[i] != '\0')
{
	if (*str == leet_char[i])
{
	*str = leet_replace[i];
	break;
}
	i++;
}
	if (leet_char[i] == '\0')
{
	i = 0;
}
	str++;
}
	return (ptr);
}
