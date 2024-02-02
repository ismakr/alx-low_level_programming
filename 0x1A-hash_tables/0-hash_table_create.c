#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	if (!table->array)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
