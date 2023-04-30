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

	p = head;
		while (p != NULL)
		{
			p = p->next;
			free(head);
			head = p;
		}
}
