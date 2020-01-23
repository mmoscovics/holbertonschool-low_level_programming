#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos;
	hash_node_t *node = NULL;
	int node_count = 0;

	if (ht)
	{
		printf("{");
		for (pos = 0; pos < ht->size; pos++)
		{
			node = (ht->array)[pos];
			while (node)
			{
				if (node_count != 0)
					printf(", ");
				node_count++;
				printf("'%s': ", node->key);
				printf("'%s'", node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
