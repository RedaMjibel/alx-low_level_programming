#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to list
 *
 * Return: nothing
 */

listint_t *reverse_listint(listint_t **head)
{
	struct listint_s *prev = NULL, *ptr2 = NULL;

	while (*head != NULL)
	{
		ptr2 = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = ptr2;
	}
	*head = prev;

	return (*head);
}
