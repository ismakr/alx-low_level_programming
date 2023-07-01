#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list.
 * @h: ptr to the the first node
 * Return: nbr on nodes
 */
size_t print_list(const list_t *h)
{
	size_t nbr;

	nbr = 0;
	if (h)
		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			nbr += 1;
		}
	return (nbr);
}
