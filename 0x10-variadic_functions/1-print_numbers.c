#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_numbers - function that prints numbers
 * @separator: the sting to be printed btw numbers
 * @n: the numbers of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
