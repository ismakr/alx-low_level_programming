#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: head of the list
 * Return: number of ele in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i += 1;
	}
	return (i);
}
