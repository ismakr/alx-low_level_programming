#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char print_flag;

	print_flag = 0;
	if (ht == NULL)
		return;
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
			i++;
		else
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (print_flag == 1)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
				print_flag = 1;
			}
		i++;
		}
	}
	printf("}\n");
}
