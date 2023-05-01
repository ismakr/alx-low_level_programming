#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the adress of the head of the list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *p;

	n = 0;
	if (*head == NULL)
		return (0);
	n = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;
	return (n);
}
