#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: ptr
 * Return: sum of all data n or 0 if node is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum;

	sum = 0;
	p = head;
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
