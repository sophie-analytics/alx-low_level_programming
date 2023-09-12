#include "main.h"

/**
 * _islower - checks if an alphabet is lowercase
 * @c: The character to check
 *
 * Description: Character to check
 *
 * Return: 1, if it is lowercase and 0, if it is not
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
