#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: ptr to the head of the first node
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
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
