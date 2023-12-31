#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Function that prints last digit of a number
 *
 * Description: Prints the last digtit
 *
 * @n: The integer it takes
 *
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
{
	last_digit = 8;

	_putchar('8');
}
else
{
	if (n < 0)
{
	n = -n;
}
	last_digit = n % 10;

	_putchar(last_digit + '0');
}

	return (last_digit);
}
