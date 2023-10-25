#include "lists.h"
/*
 * add_nodeint_end - adds a node to the end of linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: NULL - if function fails
 * otherwise - the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *now_node;
	listint_t *cu = *head;

	now_node = malloc(sizeof(listint_t));
	if (now_node != NULL)
	{
		now_node->n = n;
		now_node->next = NULL;
	}
	else
		return (NULL);
	if (cu != NULL)
	{
		while (cu->next != NULL)
			cu = cu->next;
		cu->next = now_node;
	}
	else
		*head = now_node;
	return (now_node);
}
