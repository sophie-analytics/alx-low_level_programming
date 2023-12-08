#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - print the number of values in the linked list
 * @h: The head pointer it takes
 * Return: Number of elements in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t elements;
const dlistint_t *temp;

elements = 0;
temp = h;
while (temp != NULL)
{
temp = temp->next;
elements++;
}
return (elements);
}
