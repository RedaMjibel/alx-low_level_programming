#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: pointer to list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	struct listint_s *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
