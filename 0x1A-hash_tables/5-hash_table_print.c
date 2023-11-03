#include "hash_tables.h"

/**
 * hash_table_print - ...
 * @ht: ....
 * Return: ...
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (j == 1)
				printf(", ");
			j = 1;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
