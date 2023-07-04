#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: ptr to the address of the first node
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	if  (h)
	{
		while (h != NULL)
		{
			h = h->next;
			sum += 1;
		}
	}
	return (sum);
}
