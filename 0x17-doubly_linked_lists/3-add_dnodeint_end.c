#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: numbers
 *
 * Return: the adress of the new element of NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current;

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
	}
	current->next = new;
	new->prev = current;

	return (new);
}
