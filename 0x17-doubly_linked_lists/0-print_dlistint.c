#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - t prints all the elements of a dlistint_t list.
 * @h: ptr to the header of the node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr;

	nbr = 0;
	if (h)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			nbr += 1;
		}
	}
	return (nbr);
}
