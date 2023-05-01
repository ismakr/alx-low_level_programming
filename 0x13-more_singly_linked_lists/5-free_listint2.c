#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 -  frees a listint_t list.
 * @head: ptr
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	p = *head;
	if (*head == NULL)
		return;
	while (p != NULL)
	{
		p = p->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
