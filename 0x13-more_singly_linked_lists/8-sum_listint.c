#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data
 * @head: double pointer to list
 *
 * Return: nothing
 */

int sum_listint(listint_t *head)
{
	struct listint_s *temp;
	unsigned int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
		return (sum);
}
