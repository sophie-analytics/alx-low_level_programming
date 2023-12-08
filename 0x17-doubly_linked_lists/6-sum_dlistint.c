#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - sums values of all nodes ia lin nked list
 * @head: The head pointer it takes
 * Return: The sum
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t  *temp;
int sum;

temp = head;
sum = 0;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
