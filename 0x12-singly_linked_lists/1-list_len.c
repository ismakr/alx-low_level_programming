#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: ptr to the the first node
 * Return: nbr on nodes
 */
size_t list_len(const list_t *h)
{
	size_t nbr;

	nbr = 0;
	if (h)
	{
		while (h != NULL)
		{
			h = h->next;
			nbr += 1;
		}
	}
	return (nbr);
}
