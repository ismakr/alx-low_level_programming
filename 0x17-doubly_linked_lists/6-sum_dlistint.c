#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: head of the node
 * Return: the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	sum = 0;
	ptr = head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		sum += ptr->n;
	}
	return (sum);
}
