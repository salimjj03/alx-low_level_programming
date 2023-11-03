#include "hash_tables.h"

/**
 * hash_table_get - ...
 * @ht: ..
 * @key: .....
 * Return: ....
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (index >= ht->size || tmp == NULL)
		return (NULL);
	while (strcmp(key, tmp->key) != 0)
		tmp = tmp->next;
	return (tmp->value);
}
