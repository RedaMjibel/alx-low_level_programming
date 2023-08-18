#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: the index of the node
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	return (current);
}
