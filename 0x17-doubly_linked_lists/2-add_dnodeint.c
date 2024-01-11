#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: ptr to the adr of the first node
 * @n: int ele of the node
 * Return: the head the the first node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *ptr;

	ptr = *head;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		node->prev = NULL;
		node->next = ptr;
		ptr->prev = node;
	}
	*head = node;
	return (*head);
}
