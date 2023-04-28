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
int _strlen(const char *s)
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
 * @head: ptp
 * @str: string
 * Return: the address of the new element, or NULL if it failed;
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *p;

	p = *head;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = node;
	return (node);
}
