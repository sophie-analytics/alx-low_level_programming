#include "main.h"

/**
 * factorial - A function
 * @n:The integer it takes
 * Return: The result
 */
int factorial(int n)
{
	if (n < 0)
{
	return (-1);
}
	if (n == 0)
{
	return (1);
}
else
{
	return (n * factorial(n - 1));
}
}
