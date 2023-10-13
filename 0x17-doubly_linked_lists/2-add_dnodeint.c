#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: ptr to the address of the first node
 * @n: int ele of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		node->prev = NULL;
		node->next = NULL;
		node->n = n;
		*head = node;
		return (*head);
	}
	tmp = *head;
	tmp->prev = node;
	node->next = tmp;
	node->prev = NULL;
	node->n = n;
	*head = node;
	return (*head);
}
