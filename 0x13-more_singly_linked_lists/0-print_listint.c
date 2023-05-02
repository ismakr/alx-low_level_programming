#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	if (h)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			n += 1;
		}
	}
	return (n);
}