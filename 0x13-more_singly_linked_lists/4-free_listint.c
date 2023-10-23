#include "lists.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * free_listint - Frees memeory allocated
 * @head: The head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		;
	}

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
