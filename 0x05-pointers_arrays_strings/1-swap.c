#include "main.h"

/**
 * swap_int - function that swaps pointer value
 * @a: the interger it takes
 * @b: the integer it takes
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
