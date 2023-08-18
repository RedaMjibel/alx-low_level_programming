#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: head of the list
 *
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *tofree;

	current = head;
	while (current != NULL)
	{
		tofree = current;
		current = current->next;
		free(tofree);
	}
}
