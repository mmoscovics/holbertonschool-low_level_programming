#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 *
 * @ht: hash table
 * @key: key
 * @value: value to associate with key
 *
 * Return: 1 if success, otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL || (strlen(key) == 0) || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];
	while (new)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
		new = new->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
