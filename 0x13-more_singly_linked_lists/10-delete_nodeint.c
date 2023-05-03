#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: double pointer to list
 * @index: index
 *
 * Return: nothing
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	struct listint_s *previous, *current;
	unsigned int i = 0;

	previous = *head;
	current = NULL;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(previous);
		return (1);
	}

	while (i < index - 1)
	{
		if (previous == NULL || !(previous->next))
			return (-1);
		previous = previous->next;
		i++;
	}
	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}
