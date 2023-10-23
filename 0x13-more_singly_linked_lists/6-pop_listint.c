#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - removes a node
 * @head: pointer to the head
 * Return: The element of the removed node
 */
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *current_node;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	current_node = *head;
	temp = current_node->n;
	*head = (*head)->next;
	free(current_node);

	return (temp);
}
