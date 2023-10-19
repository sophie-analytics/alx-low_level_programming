#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

int _putchar(char c);

/**
 * struct list_t - structure of a node 
 * @str: the string it takes
 * @len: length of the string
 * @next: pointer to the next node
 */

typedef struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
#endif
