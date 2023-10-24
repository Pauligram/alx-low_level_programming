#include "lists.h"
#include <stdio.h>

/*
 * get_nodeint_at_index - returns the nth nocde of a linked list
 * @head: pointer mt the head of list
 * @index: index of the node - indices starts at 0
 * Return: NULL - if node does not exist nth node
 * otherwise - the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index && head != NULL; n++)
	{
		head = head->next;
	}

	return (head);
}
