#include "lists.h"
#include <stddef.h>

/**
 * listint_len - Function that counts the no of elements in a linked list
 * @h: The head pointer it takes
 * Return: The no of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
