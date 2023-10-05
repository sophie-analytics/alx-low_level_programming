#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array
 * @size: The size of the array
 * @c: The character to intialize the array
 * Return: The result
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *output_ptr;

	if (size <= 0)
{
	return (NULL);
}
	output_ptr = (char *)malloc((size) * sizeof(char));
	if (output_ptr == NULL)
{
	return (NULL);
}
	for (i = 0; i < size; i++)
{
	output_ptr[i] = c;
}
	return (output_ptr);
}
