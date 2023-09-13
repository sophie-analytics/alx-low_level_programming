#include "main.h"

/**
 * jack_bauer - The fucntion for printing the time
 *
 */
void jack_bauer(void)
{
	int minute, second;

	for (minute = 0; minute < 24; minute++)
{
	for (second = 0; second < 60; second++)
{
	_putchar('0' + (minute / 10));
	_putchar('0' + (minute % 10));
	_putchar(':');
	_putchar('0' + (second / 10));
	_putchar('0' + (second % 10));
	_putchar('\n');
}
}
}
