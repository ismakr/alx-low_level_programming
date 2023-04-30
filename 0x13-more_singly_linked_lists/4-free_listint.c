#include "lists.h"
#include <stdlib.h>
/**
 * free_listint -  frees a listint_t list.
 * @head: ptr
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;
	if (head == NULL)
		free(head);
	p = head;
	while (p != NULL)
	{
		free(p);
		p = p->next;
	}
}
