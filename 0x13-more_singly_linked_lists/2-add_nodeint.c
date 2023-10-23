#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_nodeint - Adds node to the start of a linked list
 * @head: The head of the list
 * @n: The integer it takes
 * Return: The address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
