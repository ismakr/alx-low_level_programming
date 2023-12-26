#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - ret the length of str
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: ptr to the address of the first node
 * @str: str ele of node
 * Return:  the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *node;
	list_t *ptr;

	ptr = *head;
	node = malloc(sizeof(list_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}
	s = strdup(str);
	node->str = s;
	node->len = _strlen(s);
	node->next = NULL;
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
	}
	else
		*head = node;
	return (*head);
}
