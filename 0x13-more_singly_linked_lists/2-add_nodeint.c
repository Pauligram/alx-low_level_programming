#include "lists.h"
/*
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: pointer to head of a list
 * @n: n element
 * Return: Null if it fails
 * Otherwise - the address of the new element
 */

listint_t *add_nodeint (listint_t **head, const int n)
{
	listint_t *now;
	now = malloc(sizeof(listint_t));

	if (now == NULL)
		return (NULL);
	now->n = n;
	now->next = *head;
	*head = now;
	
	return (*head);
}
