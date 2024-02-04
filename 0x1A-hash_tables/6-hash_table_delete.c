#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;
	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		tmp = node;
		while (node != NULL)
		{
			node = node->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
