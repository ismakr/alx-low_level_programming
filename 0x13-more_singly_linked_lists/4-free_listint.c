#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: address of the node
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		free(head);
	else
	{
		while (head != NULL)
		{
			free(head);
			head = head->next;
		}
	}
}
