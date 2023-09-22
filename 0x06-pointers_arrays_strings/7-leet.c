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

	while (*str)
{
	for (i = 0; leet_char[i]; i++)
{
	if (*str == leet_char[i])
{
	*str = leet_replace[i];
}
}
	str++;
}
	return (ptr);
}
