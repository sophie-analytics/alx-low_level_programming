#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generates digts in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
	putchar('\n');

	return (0);
}
