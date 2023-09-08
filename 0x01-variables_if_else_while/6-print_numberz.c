#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Generates digits in base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
}
	putchar('\n');

	return (0);
}
