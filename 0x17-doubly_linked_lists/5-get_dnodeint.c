#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the node
 * @index: idx of the node
 * Return: nth node or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = head;
	i = 0;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
