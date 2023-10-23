#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - Free memory allocated
 * @head: pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (head == NULL || *head == NULL)
	{
		;
	}
	node = *head;

	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	*head = NULL;
}
