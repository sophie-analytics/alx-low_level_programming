#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_node_end - add nodes to the end of a linked list
 * @head: The start of the node
 * @str: The string to be appended
 * Return: The address of the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *linkedlist = *head;

		while (linkedlist->next != NULL)
		{
			linkedlist = linkedlist->next;
		}
		linkedlist->next = new_node;
	}

	return (new_node);
}

