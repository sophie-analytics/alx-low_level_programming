#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Generates possible combination of numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
{
	putchar(num + '0');

	if (num < 9)
{
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');

	return (0);
}
