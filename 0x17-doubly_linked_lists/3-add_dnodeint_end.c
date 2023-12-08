#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @head: The head pointer it takes
 * @n: The data in the node to be added to the linked list
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tv;
dlistint_t *temp;

temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->prev = NULL;
temp->next = NULL;
temp->n = n;
if (*head == NULL)
{
*head = temp;
}
else
{
tv = *head;
while (tv->next != NULL)
{
tv = tv->next;
}
temp->prev = tv;
tv->next = temp;
}
return (temp);
}
