#include "hash_tables.h"

/**
 * hash_table_print - ...
 * @ht: ....
 * Return: ...
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (i > 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		}
		i++;
	}
	printf("}\n");
}
