#include "main.h"

/**
 * cap_string - A function
 * @str: A string
 * Return: The result
 */
char *cap_string(char *str)
{
	int cap = 1;
	char *ptr = str;

	while (*str != '\0')
{
	if (*str >= 'a' && *str <= 'z' && cap)
{
	*str = *str - 32;
	cap = 0;
}
else if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ','
|| *str == ';' || *str == '.' || *str == '!'
|| *str == '?' || *str == '"' || *str == '('
|| *str == ')' || *str == '{' || *str == '}')
{
	cap = 1;
}
else
{
	cap = 0;
}
	str++;
}
	return (ptr);
}

