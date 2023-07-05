#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: address of the node
 * Return: void
 */
void free_listint2(listint_t **head)
{
        listint_t *ptr;

        ptr = *head;
        while (ptr != NULL)
        {
                ptr = ptr->next;
                free(head);
                *head = ptr;
        }
	*head = NULL;
}
