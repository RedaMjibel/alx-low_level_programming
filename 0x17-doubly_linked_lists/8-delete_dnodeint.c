#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: head of the list
 * @index: index
 *
 * Return: 1 on success or -1 on faliure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (current == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
	
	*head = current->next;
	free(current);
	return (1);
	}
	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current->prev != NULL)
	{
			current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
