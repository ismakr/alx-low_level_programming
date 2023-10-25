#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint -  returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: the head of the node
 * Return: the sum of data n (int)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
