#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - Prints the elements and no. of elements in a linked list
 * @h: The head pointer it takes
 * Return: The number of nodes and the list of nodes values
 */
size_t print_list(const list_t *h)
{
	unsigned int list_count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
	h = h->next;
	list_count++;
	}
	return (list_count);
}
