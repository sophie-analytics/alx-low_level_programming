#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>

/**
 * print_all - function that prints anything
 * @format: the string it takes
 */
void print_all(const char * const format, ...)
{
	va_list args;

	int i;
	char *separator = "";
	const char *current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = &format[i];
		if ((*current_format == 'c') || (*current_format == 'i') ||
		   (*current_format == 'f') || (*current_format == 's'))
		{
			printf("%s", separator);
		if (*current_format == 'c')
			printf("%c", va_arg(args, int));
		else if (*current_format == 'i')
			printf("%d", va_arg(args, int));
		else if (*current_format == 'f')
			printf("%f", va_arg(args, double));
		else if (*current_format == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("nil");
			else
				printf("%s", str);
		}
			separator = ", ";
		}
		i++;
	}
	printf("\n");
}
