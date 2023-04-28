#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to node
 *
 * Return: number of lists
 */

size_t print_list(const list_t *h)
{
size_t i = 0;

while (h)
{
	if (h-> str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	i++;
}
return (i);
}
