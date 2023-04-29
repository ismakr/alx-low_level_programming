#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: ptr
 * @n: nbr
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *p;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head != NULL)
	{
		*head = node;
		return (node);
	}
	p = *head;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = node;
	return (node);
}
