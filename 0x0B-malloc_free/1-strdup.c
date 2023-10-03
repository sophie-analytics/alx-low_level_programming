#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function
 * @str: The pointer it takes
 * Return: The result
 */
char *_strdup(char *str)
{
	char *duplicated_str;
	char *output_str;
	char *input_str = str;
	int i;

	i = 0;
	while (*input_str != '\0')
{
	i++;
	input_str++;
}
	duplicated_str = (char *)malloc((i + 1) * sizeof(char));

	if (duplicated_str == NULL)
{
	return (NULL);
}
	output_str = duplicated_str;

	while (*str != '\0')
{
	*output_str = *str;
	str++;
	output_str++;
}
	*output_str = '\0';

	return (duplicated_str);
}
