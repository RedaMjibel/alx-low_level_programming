#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at he beginning of a doubly linked list
 * @head: head of the list
 * @n: data
 *
 * Return: number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	 if (new == NULL)
		 return (NULL);
	 new->n = n;
	 new->prev = NULL;
	 h = *head;
	 new->next = h;
	 if (h != NULL)
		 h->prev = new;
	 *head = new;

	 return (new);
}
