#include "main.h"

/**
 * print_alphabet - Entry point and function
 *
 * Description: Prints all the alphabets in lowercase
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
	_putchar('\n');
}
