#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to list
 * @idx: index
 * @n: data
 *
 * Return: nothing
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	struct listint_s *temp, *ptr2;
	unsigned int i = 0;

	temp = *head;
	ptr2 = malloc(sizeof(struct listint_s));
	if (ptr2 == NULL || head == NULL)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;

	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);
	}
	while (idx != i)
	{
		temp = temp->next;
		i++;
	}
	ptr2->next = temp->next;
	temp->next = ptr2;

	return (ptr2);
}
