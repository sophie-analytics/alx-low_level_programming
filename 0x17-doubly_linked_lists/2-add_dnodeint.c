#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint -adds a node to the start of a linked list
 * @head: The head pointer it takes
 * @n: The data in the node to be added to the linked list
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;

temp = malloc(sizeof(dlistint_t));
if (temp ==  NULL)
{
return (NULL);
}
temp->prev = NULL;
temp->n = n;
temp->next = *head;
if (*head != NULL)
{
(*head)->prev = temp;
}
*head = temp;
return (temp);
}
