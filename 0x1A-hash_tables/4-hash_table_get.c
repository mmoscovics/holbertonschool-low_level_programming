#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated
 * with a key.
 *
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with element, or NULL if key doesn't exsist
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *pos = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		pos = ht->array[index];
		while (pos)
		{
			if (strcmp(pos->key, key) == 0)
				return (pos->value);
			pos = pos->next;
		}
	}
	return (NULL);
}
