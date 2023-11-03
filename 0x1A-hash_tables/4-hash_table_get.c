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

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	if (ht->array[index] != NULL && strcmp(key, ht->array[index]->key) == 0)
		return (ht->array[index]->value);
	return (NULL);
}
