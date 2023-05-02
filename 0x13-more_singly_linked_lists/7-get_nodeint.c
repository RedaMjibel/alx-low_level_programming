#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - delete a node
 * @head: double pointer to list
 *
 * Return: nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	struct listint_s *temp;
	unsigned int i = 0;

	temp = head;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	return (NULL);
	else
		return (temp);
}
