#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - sums the node value
 * @head: The head of the node
 * Return: The sum of the node value
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node;

	if (head == NULL)
	{
		return (0);
	}
	current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
