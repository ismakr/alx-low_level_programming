#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: ptr to the address of the first node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int sum = 0;

	if  (h)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			sum += 1;
		}
	}
	return (sum);
}
