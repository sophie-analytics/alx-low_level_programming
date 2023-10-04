#include <stdlib.h>
#include "main.h"

/**
 * str_concat - A function that concats 2 strings
 * @s1: The first string it takes
 * @s2: The second string it takes
 * Return: The result
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j;
	char *duplicated_s1 = s1;
	char *duplicated_s2 = s2;
	char *concat_str;
	char *output_str;

	if (s1 == NULL && s2 == NULL)
{
	return (NULL);
}
	while (*duplicated_s1 != '\0')
{
	i++;
	duplicated_s1++;
}
	j = i;
	while (*duplicated_s2 != '\0')
{
	j++;
	duplicated_s2++;
}
	concat_str = (char *)malloc((j + 1) * sizeof(char));
	if (concat_str == NULL)
{
	return (NULL);
}
	output_str = concat_str;

	while (*s1 != '\0')
{
	*output_str = *s1;
	output_str++;
	s1++;
}
	while (*s2 != '\0')
{
	*output_str = *s2;
	output_str++;
	s2++;
}
	*output_str = '\0';

	return (concat_str);
}

	
