#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print the values in the linked list
 * @h: The head pointer it takes
 * Return: Number of elements in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t elements;
const dlistint_t *temp;

elements = 0;
temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
elements++;
}
return (elements);
}
