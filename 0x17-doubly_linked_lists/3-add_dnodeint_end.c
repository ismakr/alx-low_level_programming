#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: ptr to the address of the first node.
 * @n: ele of the node
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *tmp;

	tmp = *head;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
		node->prev = tmp;
		tmp = node;
	}
	return (*head);
}
