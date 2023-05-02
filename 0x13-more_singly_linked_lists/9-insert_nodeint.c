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
	listint_t *node;
	listint_t *p;
	listint_t *tmp;

	i = 0;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	p = *head;
	while (p != NULL)
	{
		if (i == 0 && idx == 0)
		{
			tmp = p->next;
			node = p;
			*head = node;
			node->next = tmp;
		}
		else if (idx - 1 == i)
		{
			tmp = p->next;
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
