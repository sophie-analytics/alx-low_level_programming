#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - adds a node to a given index of a linked list
 * @head: The head pointer it takes
 * @index: The  node to be gotten from the linked list
 * Return: The value at the index or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int i;

temp = head;
i = 0;
while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}
return (temp);
}
