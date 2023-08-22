#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the addr of the first node.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		free(tmp);
		tmp = tmp->next;
	}
}
