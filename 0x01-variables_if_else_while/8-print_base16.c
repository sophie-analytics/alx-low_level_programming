#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generates the digits in base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch, ab;

	for (ch = 0; ch <= 9; ch++)
{
	putchar(ch + '0');
}
	for (ab = 'a'; ab <= 'f'; ab++)
{
	putchar(ab);
}
	putchar('\n');

	return (0);
}
