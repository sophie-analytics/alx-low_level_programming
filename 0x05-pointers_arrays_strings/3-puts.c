#include "main.h"

/**
 * _puts - the function the imitates puts
 * @str: the string it takes
 */
void _puts(char *str)
{
	while (*str != '\0')
{
	_putchar(*str);
	str++;
}
	_putchar('\n');
}
