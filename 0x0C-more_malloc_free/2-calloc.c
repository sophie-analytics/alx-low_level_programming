#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory to an array of elements
 * @nmemb: The number of elements in the array
 * @size: The size in bytes of the elements
 * Return: The result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *output_ptr;

	if (nmemb == 0 || size == 0)
{
	return (NULL);
}
	output_ptr = malloc(nmemb * size);
	if (output_ptr == NULL)
{
	return (NULL);
}
	memset(output_ptr, 0, nmemb * size);

	return (output_ptr);
}
