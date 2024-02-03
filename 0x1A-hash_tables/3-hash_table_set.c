#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @key: key
 * @value: value
 * @ht: hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;
	hash_node_t *update;

	/* get the idx using djb2 algo */
	idx = key_index((unsigned char *)key, ht->size);
	/* update the key at idx if it is already exists */
	update = ht->array[idx];
	while (update)
	{
		if (strcmp(update->key, key) == 0)
		{
			update->value = strdup(value);
			if (!update->value)
				return (0);
			return (1);
		}
		update = update->next;
	}
	/* creat a new node */
	node = add_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
/**
 * add_node - add node
 * @key: key
 * @value: value
 * Return: node
 */
hash_node_t *add_node(const char *key, const char *value)
{
	char *k;
	char *v;
	hash_node_t *h;

	k = strdup(key);
	v = strdup(value);
	h = malloc(sizeof(hash_node_t));
	if (h == NULL || k == NULL || v == NULL)
	{
		free(k);
		free(v);
		free(h);
		return (NULL);
	}
	h->key = k;
	h->value = v;
	h->next = NULL;
	return (h);
}
