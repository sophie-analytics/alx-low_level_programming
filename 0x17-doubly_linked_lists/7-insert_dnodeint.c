#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - adds a node to a given index of a linked list
 * @h: The head pointer it takes
 * @idx: The  index of the position to be added to the linked list
 * @n: The value to be added to the linked list
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp, *current;
unsigned int i;

temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
current = *h;
if (idx == 0)
{
if (*h != NULL)
(*h)->prev = temp;
temp->next = *h;
*h = temp;
return (temp);
}
i = 0;
while (i < idx - 1 && current != NULL)
{
current = current->next;
i++;
}
if (current == NULL)
{
free(temp);
return (NULL);
}
temp->next = current->next;
if (current->next != NULL)
{
current->next->prev = temp;
}
current->next = temp;
temp->prev = current;
return (temp);
}
