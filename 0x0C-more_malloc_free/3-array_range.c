#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: The minimum integer it takes
 * @max: The maximum integer it takes
 * Return: The result
 */
int *array_range(int min, int max)
{
	int i;
	int *range_numbers;

	if (min > max)
{
	return (NULL);
}
	range_numbers = (int *)malloc((max - min + 1) * sizeof(int));
	if (range_numbers == NULL)
{
	return (NULL);
}
	for (i = 0; i <= max - min; i++)
{
	range_numbers[i] = min + i;
}
	return (range_numbers);
}
