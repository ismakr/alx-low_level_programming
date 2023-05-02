#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: ptr to the adress of the first node
 * @idx:  index of the list where the new node should be added.
 * Index starts at 0.
 * @n: nbr
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *p, *tmp;

	i = 0;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	p = *head;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	p = *head;
	i = 0;
	while (p != NULL)
	{
		if ((idx - 1 == i) || (i == 0 && idx == 0))
		{
			tmp = p->next;
			if (idx == 0)
			{
				node = p;
				*head = node;
			}
			else
				p->next = node;
			node->n = n;
			node->next = tmp;
			break;
		}
		p = p->next;
		i++;
	}
	return (node);
}
