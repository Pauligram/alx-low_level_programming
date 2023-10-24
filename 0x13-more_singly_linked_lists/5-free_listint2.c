#include "lists.h"
#include <stdio.h>

/*
 * free_listint2 - frees a listint_t list
 * @head: A pointer to the address of thehead of the listint_t list
 * Description: sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tri;
	if (head == NULL)
		return;
	while (*head)
	{
		tri = *head;
		*head = (*head)->next;
		free(tri);
	}
	head = NULL;
}
