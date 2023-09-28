#include "main.h"

/**
 * _sqrt_recursion - A function
 * @n: The integer
 * Return: The result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)

	return (-1);

	return (sqrt_helper(n, 0));
}
/**
 * sqrt_helper - A function
 * @n: The integer
 * @guess: The guess of the square rooe
 * Return: The result
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)

	return (guess);

	if (guess * guess > n)

	return (-1);

	return (sqrt_helper(n, guess + 1));
}
