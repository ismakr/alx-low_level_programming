#include <stdlib.h>
#include "lists.h"
/**
 * free_list -  frees a list_t list.
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p;

	p = head;
	while (p != NULL)
	{
		p = p->next;
		free(p);
	}
}
