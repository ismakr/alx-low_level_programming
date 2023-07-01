#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: ptr the address of the first node.
 * @str: str to be printed
 * Return: the address of the first node or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	list_t *h;

	s = strdup(str);
	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);
	h->str = s;
	h->len = _strlen(s);
	h->next = *head;
	*head = h;
	return (*head);
}
