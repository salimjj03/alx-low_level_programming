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

	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = newnode;
		return (1);
	}
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (tmp->next == NULL)
			{
				tmp->next = newnode;
				return (1);
			}
			tmp = tmp->next;
		}
	}
	return (0);
}
