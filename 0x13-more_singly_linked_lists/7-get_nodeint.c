#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: ptr to the first node
 * @index: the index of the node
 * Return:  returns the nth node or null if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i;

	i = 0;
	p = head;
	while (p != NULL)
	{
		if (i == index)
			return (p);
		i++;
		p = p->next;
	}
	return (NULL);
}
