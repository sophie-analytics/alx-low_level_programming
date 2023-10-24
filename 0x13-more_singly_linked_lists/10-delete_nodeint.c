#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node as an index position
 * @head: The head of the linked list
 * @index: The index
 * Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current_node, *prev_node;

	if (*head == NULL)
	{
		return (-1);
	}

	current_node = *head;
	prev_node = NULL;
	count = 0;

	while (current_node != NULL && count < index)
	{
		prev_node = current_node;
		current_node = current_node->next;
		count++;
	}

	if (current_node == NULL)
	{
		return (-1);
	}
	if (prev_node == NULL)
	{
		*head = current_node->next;
	}
	else
	{
		prev_node->next = current_node->next;
	}
	free(current_node);
	return (1);
}
