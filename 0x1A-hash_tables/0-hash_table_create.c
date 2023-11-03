#include "hash_tables.h"

/**
 * hash_table_create - ....
 * @size: size of the table
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table = NULL;
	hash_node_t **t_array = NULL;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	t_array = malloc(sizeof(hash_node_t *) * size);
	if (t_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		t_array[i] = NULL;

	hash_table->size = size;
	hash_table->array = t_array;
	return (hash_table);
}
