#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list -  frees a list_t list
 * @head: pointer to the beginning of the list
 *
 * Return: number of elements
 */

void free_list(list_t *head)
{
struct list_s *tmp;

while (head != NULL)
{
	tmp = head;
	head = head->next;
	free(tmp);
}
}
