#include "lists.h"

/*
 * pop_listint - deletes the head node a linked list
 * @head: pointer to the head of the linked list
 * Return: head node data (n)
 * otherwise 0 - if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tri;
	int n;

	tri = *head;
	
	if (tri == NULL)
		return (0);
	*head = tri->next;
	n = tri->n;
	free(tri);

	return (n);
}
