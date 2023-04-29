#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	if (h)
	{
		while (h != NULL)
		{
			h = h->next;
			n++;
		}
	}
	return (n);
}
