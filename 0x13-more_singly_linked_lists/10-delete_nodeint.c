#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: ptr the adress of the first node
 * @index: starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *ptr;

	i = 0;
	node = *head;
	ptr = *head;
	if (node == NULL || node->next == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (i < index - 1)
	{
		ptr = ptr->next;
		i++;
	}
	i = 0;
	while (i < index)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
		if (i + 1 == index)
			ptr->next = node->next;
		i++;
	}
	free(node);
	return (1);
}
