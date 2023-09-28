#include "main.h"

/**
 * is_divisible - A function
 * @n: The integer
 * @divisor: The number to divide with
 * Return: The result
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
{
	return (0);
}
	if (n % divisor == 0)
{
	return (1);
}
	if (divisor * divisor > n)
{
	return (0);
}
	return (is_divisible(n, divisor + 1));
}

/**
 * is_prime_number - A function
 * @n: The integer
 * Return: The result
 */
int is_prime_number(int n)
{
	if (n <= 1)
{
	return (0);
}
else
{
	return (!(is_divisible(n, 2)));
}
}
