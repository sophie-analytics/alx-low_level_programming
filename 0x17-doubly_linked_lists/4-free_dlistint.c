#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees allocated space for a node in a a linked list
 * @head: The head pointer it takes
 * Return: The address of the new element, or NULL if it failed
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
