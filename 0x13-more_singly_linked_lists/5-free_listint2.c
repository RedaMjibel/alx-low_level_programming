#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: double pointer to list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	struct listint_s *new;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
	}
	*head = NULL;
}
