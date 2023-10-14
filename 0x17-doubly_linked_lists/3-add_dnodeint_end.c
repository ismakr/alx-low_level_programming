#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: the adr of the first node
 * @n: int ele of the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));
	tmp = malloc(sizeof(dlistint_t));
	if (node || tmp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		node->n = n;
		*head = node;
		return (*head);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	node->prev = tmp;
	node->n = n;
	return (*head);
}
