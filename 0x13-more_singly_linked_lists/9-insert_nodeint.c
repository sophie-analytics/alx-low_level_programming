#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts node as an index position
 * @head: The head of the linked list
 * @idx: The index
 * @n: The value to be inserted
 * Return: The new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *current_node, *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
		current_node = *head;
	}

	while (current_node != NULL && count < idx - 1)
	{
		current_node = current_node->next;
		count++;
	}

	if (current_node != NULL)
	{
		new_node->n = n;
		new_node->next = current_node->next;
		current_node->next = new_node;

		return (new_node);
	}
	return (NULL);
}
