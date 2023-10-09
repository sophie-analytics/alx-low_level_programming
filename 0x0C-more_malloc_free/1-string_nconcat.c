#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concat n number of characters
 * @s1: The destination
 * @s2: The string to be concatenated
 * @n: The number of s2 to be concatenated
 * Return: The result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int s1_length = strlen(s1);
	unsigned int s2_length = strlen(s2);
	unsigned int length;
	char *concat_str;

	if (s1 == NULL)
{
	s1 = "";
}
	if (s2 == NULL)
{
	s2 = "";
}
	if (n > s2_length)
{
	n = s2_length;
}
	length = n + s1_length;

	concat_str = (char *)malloc((length + 1) * sizeof(char));
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
	i = s1_length;
	for (j = 0; j < n; j++)
{
	concat_str[i] = s2[j];
	i++;
}
	concat_str[i] = '\0';
	return (concat_str);
}
