#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: ptr to the head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h)
	{
		while (h != NULL)
		{
			i += 1;
			h = h->next;
		}
	}
	return (i);
}
