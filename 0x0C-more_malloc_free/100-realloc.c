#include "main.h"
#include <stdlib.h>
#include "string.h"

/**
 * _realloc - Function that rellocates memory
 * @ptr : The pointer
 * @old_size: The previous size
 * @new_size: The new size
 * Return: The result
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (ptr == NULL)
{
	return (malloc(new_size));
}
	if (new_size == 0)
{
	free(ptr);
	return (NULL);
}
	if (new_size == old_size)
{
	return (ptr);
}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
{
	return (NULL);
}
	if (old_size < new_size)
{
	memcpy(new_ptr, ptr, old_size);
}
else
{
	memcpy(new_ptr, ptr, new_size);
}
	free(ptr);

	return (new_ptr);
}
