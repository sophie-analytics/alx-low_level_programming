#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Generates the single digits in base 10
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
{
	printf("%d", num);
}
	printf("\n");

	return (0);
}
