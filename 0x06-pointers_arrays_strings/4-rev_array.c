#include "main.h"

/**
 * reverse_array - The function
 * @a: The intger
 * @n: the number it takes
 */
void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;

	while (start < end)
{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++;
	end--;
}
}
