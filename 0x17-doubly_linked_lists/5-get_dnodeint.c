#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the list
 * @index: the index of the node, starting from 0
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = head;
	i = 1;
	while (i <= index)
	{
		ptr = ptr->next;
		i += 1;
	}
	return (ptr);
}
