#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * add_node_end -  adds a new node at the beginning of the list
 * @head: pointer to the beginning of the list
 * @str: new string to add into the node
 *
 * Return: number of elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
struct list_s *current, *j = *head;
unsigned int i = 0;

while (str[i] != '\0')
	i++;

current = malloc(sizeof(struct list_s));
if (current == NULL)
	return (NULL);

current->str = strdup(str);
current->len = i;
current->next = NULL;

if (*head == NULL)
{
	*head = current;
	return (current);
}

while (j->next)
j = j->next;
j->next = current;

return (current);
}
