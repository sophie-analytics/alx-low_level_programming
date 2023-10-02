#include "main.h"

/**
 * _isalpha - The function
 *
 * @c: The character it checks
 *
 * Return: 1, if it is lowercase or uppercase, 0, if it is none
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
	else
{
	return (0);
}
}
