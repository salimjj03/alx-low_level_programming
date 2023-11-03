#include "hash_tables.h"

/**
 * hash_table_set - ..
 * @ht: ...
 * @key: ...
 * @value: ...
 * Return: ...
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp != NULL && strcmp(tmp->key, key) == 0)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
