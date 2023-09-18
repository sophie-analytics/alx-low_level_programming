#include "main.h"

/**
 * rev_string - function that reverse a string
 * @s: the string it takes
 */
void rev_string(char *s)
{
	int length, start, end;
	char temp;

	length = 0;
	start = 0;

	while (s[length] != '\0')
{
	length++;
}
	end = length - 1;

	while (start < end)
{
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;

	start++;
	end--;
}
}
