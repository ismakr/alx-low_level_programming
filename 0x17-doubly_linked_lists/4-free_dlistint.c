#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head of the node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
