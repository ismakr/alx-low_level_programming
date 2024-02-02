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
	hash_table_t *h_table;

	h_table = malloc(sizeof(hash_table_t));
	if (!h_table)
	{
		return (NULL);
	}
	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!h_table->array)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		h_table->array[i] = NULL;
		i++;
	}
	return (h_table);
}
