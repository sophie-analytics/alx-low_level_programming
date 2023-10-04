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
	int i, j;
	char *concat_str;

	if (s1 == NULL && s2 == NULL)
{
	s1 = "";
	s2 = "";
}
	else if (s1 == NULL && s2 != NULL)
{
	s1 = "";
}
	else if (s1 != NULL && s2 == NULL)
{
	s2 = "";
}
	i = 0;
	while (s1[i] != '\0')
{
	i++;
}
	j = 0;
	while (s2[j] != '\0')
{
	j++;
	i++;
}
	concat_str = (char *)malloc((i + 1) * sizeof(char));
	if (concat_str == NULL)
{
	return (NULL);
}
	i = 0;
	while (s1[i] != '\0')
{
	concat_str[i] = s1[i];
	i++;
}
	j = 0;
	while (s2[j] != '\0')
{
	concat_str[i] = s2[j];
	j++;
	i++;
}
	concat_str[i] = '\0';
	return (concat_str);
}
