#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pos;
	hash_node_t *node = NULL, *del = NULL;

	for (pos = 0; pos < ht->size; pos++)
		if (ht->array[pos])
		{
			node = ht->array[pos];
			while (node)
			{
				del = node;
				node = node->next;
				free(del->key);
				free(del->value);
				free(del);
			}
		}
	free(ht->array);
	free(ht);
}
