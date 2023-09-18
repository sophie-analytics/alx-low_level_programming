#include "main.h"

/**
 * puts2 - function that uses puts
 * @str: the character it takes
 */
void puts2(char *str)
{
	int length, i;

	length = 0;

	while (str[length] != '\0')
{
	length++;
}
	for (i = 0; i < length; i++)
{
	if (i % 2 == 0)
{
	_putchar(str[i]);
}
}
	_putchar('\n');
}
