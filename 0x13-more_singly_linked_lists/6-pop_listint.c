#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete a node
 * @head: double pointer to list
 *
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	struct listint_s *temp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

		data = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;

	return (data);
}
