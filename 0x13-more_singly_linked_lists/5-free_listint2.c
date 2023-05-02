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

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	head = NULL;
}