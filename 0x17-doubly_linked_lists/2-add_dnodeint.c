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

	 if (new == NULL)
		 return (NULL);
	 new->n = n;
	 new->prev = NULL;
	 if (*head != NULL)
	 {
		 while ((*head)->prev != NULL)
			 *head = (*head)->prev;
	 }

	 (*head)-> prev = new;
	 new->next = (*head);
	 (*head) = new;

	 return (new);
}
