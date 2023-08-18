#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: head of the list
 * @idx: index
 * @n: value
 *
 * Return: adress of the new node or NULL on it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = *h;
 	unsigned int i = 0;

	if (idx == 0 || current == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	new->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new;
	}
	new->prev = current;
	current->next = new;
	return(new);
}
