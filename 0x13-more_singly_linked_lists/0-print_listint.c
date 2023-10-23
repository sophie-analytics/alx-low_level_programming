#include "lists.h"
#include <stddef.h>

/**
 * print_listint - Function that prints all the elements in a linked list
 * @h: The head pointer to the linked list
 * Return: The elements of the linked list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
