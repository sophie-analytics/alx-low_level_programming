#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that performs a sum
 * @n: the integer it takes
 * Return: The result
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	int sum;
	unsigned int i;

	va_list args;

	va_start(args, n);

	sum = 0;
	

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
