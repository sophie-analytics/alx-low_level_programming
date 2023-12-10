#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete a node to a given index of a linked list
 * @head: The head pointer it takes
 * @index: The  index of the position to be removed from the linked list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;

if (*head == NULL)
{
return (-1);
}
current = *head;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(current);
return (1);
}
i = 0;
while (current != NULL && i < index - 1)
{
current = current->next;
i++;
}
if (current->next == NULL || current == NULL)
{
return (-1);
}
temp = current->next;
current->next = temp->next;
if (temp->next != NULL)
{
temp->next->prev = current;
}
free(temp);
temp = NULL;
return (1);
}
