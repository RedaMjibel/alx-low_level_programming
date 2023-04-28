#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len -  returns the number of elements
 * @h: pointer to node
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t i = 0;

while (h)
{
	h = h->next;
	i++;
}
return (i);
}
