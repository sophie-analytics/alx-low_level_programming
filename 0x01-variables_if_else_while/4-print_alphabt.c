#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Generates alphabet a-z without e and q
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
	putchar('\n');

	return (0);
}
