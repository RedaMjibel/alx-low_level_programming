#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pointer = h;
	int i = 0;

	while (pointer != NULL)
	{
		printf("%d\n", pointer->n);
		pointer = pointer->next;
		i++;
	}
	return (i);
}
