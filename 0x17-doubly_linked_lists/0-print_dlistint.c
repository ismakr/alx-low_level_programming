#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: ptr to the head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			i += 1;
			h = h->next;
		}
	}
	return (i);
}
