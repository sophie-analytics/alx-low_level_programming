#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node - adds node to the beginning of a linked list
 * @head: The first node
 * @str: The string to be added
 * Return: The address of the new node
 */
list_t *add_node(list_t **head, const char *str)
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
