#include "hash_tables.h"

/**
 * hash_table_delete - ...
 * @ht: ....
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t  *tmp = NULL;
	unsigned long int i = 0;

	if (ht == NULL || ht->size == 0)
		return;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			if (tmp != NULL)
			{
				ht->array[i] = ht->array[i]->next;
				free(tmp->value);
				free(tmp->key);
				free(tmp);
			}
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
