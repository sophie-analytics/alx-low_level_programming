#include "main.h"

/**
 * _puts_recursion - The function
 * @s: The string
 * Return: The result
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
{
	_putchar('\n');
}
else
{
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
}
