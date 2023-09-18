#include "main.h"

/**
 * puts_half - the function
 * @str: the character it takes
 */
void puts_half(char *str)
{
	int length, i, start;

	length = 0;

	while (str[length] != '\0')
{
	length++;
}
	if (length % 2 == 0)
{
	start = length / 2;
}
else
{
	start = (length - 1) / 2;
}
	for (i = start; i < length; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}

