#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: ptr to the address of the first node
 * @n: ele of the node
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
