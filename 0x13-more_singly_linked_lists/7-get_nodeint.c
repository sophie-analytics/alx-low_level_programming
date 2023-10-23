#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - function that uses index to get value of at a node
 * @head: The head of the linked list
 * @index: The index of the node
 * Return: The value at the node (using index)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	current_node = head;
	while (current_node != NULL)
	{
		if (count == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
		count++;
	}
	return (NULL);
}
