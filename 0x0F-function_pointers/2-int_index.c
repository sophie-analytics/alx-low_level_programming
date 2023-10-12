#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - The function for comparison
 * @array: the array it takes
 * @size: The size of the array
 * @cmp: The pointer to a function
 * Return: The result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
