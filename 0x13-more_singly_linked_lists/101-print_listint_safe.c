#include "lists.h"

/*
 * reverse_listint - prints a listint_t linked list.
 * @head: pointer to the list.
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t play = 0;
	const listint_t *node = head;	
	if (!head)
		exit(98);
	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
		play++;
	}
	return (play);
}
