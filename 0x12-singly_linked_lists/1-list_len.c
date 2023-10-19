#include "lists.h"
#include <stddef.h>

/**
 * list_len - counts the no of elements in a linked list
 * @h: The linked list
 * Return: The no of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int elements_count = 0;

	while (h != NULL)
	{
		elements_count++;
		h = h->next;
	}
	return (elements_count);
}
