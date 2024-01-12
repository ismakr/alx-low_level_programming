#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head of the node
 * @idx: position to insert the node
 * @n: int data of the node
 * Return: head of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *node;
	dlistint_t *tmp;
	unsigned int i;

	ptr = *h;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	i = 0;
	while (i < idx)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i += 1;
	}
	if (idx == 0)
	{
		node->n = n;
		node->next = NULL;
		node->prev = NULL;
		*h = node;
		return (*h);
	}
	node->n = n;
	tmp = ptr->prev;
	tmp->next = node;
	ptr->prev = node;
	node->next = ptr;
	node->prev = tmp;
	return (*h);
}
