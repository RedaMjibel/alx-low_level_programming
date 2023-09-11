#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: a pointer to the hash table
 * @key: the key
 *
 * Return: the value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	if (ht->array == NULL || ht->size == 0 || strlen(key) == 0)
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
