#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elemnts in a doubly linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *pointer = h;
	int i = 0;

	while (pointer != NULL)
	{
		pointer = pointer->next;
		i++;
	}
	return (i);
}
