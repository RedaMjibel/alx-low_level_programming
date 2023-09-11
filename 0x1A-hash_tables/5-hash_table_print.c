#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints out a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	char check = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (check == 1)
				printf(", ");
			printf("%s: %s", node->key, node->value);
			check = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
