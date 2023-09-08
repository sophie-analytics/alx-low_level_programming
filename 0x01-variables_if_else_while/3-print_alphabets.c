#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Generates alphabet from a -z
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char ch, ab;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	for (ab = 'A'; ab <= 'Z'; ab++)
{
	putchar(ab);
}
	putchar('\n');

	return (0);
}
