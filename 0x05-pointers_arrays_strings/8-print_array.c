#include "main.h"
#include <stdio.h>

/**
 * print_array - Function
 * @a: the pointer
 * @n: the integer it takes
 * Return: return values
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	printf("%d", a[i]);

	if (i < n - 1)
{
	printf(", ");
}
}
	printf("\n");
}
