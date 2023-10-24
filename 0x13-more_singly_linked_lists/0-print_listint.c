#include "lists.h"
#include <stdio.h>
/*
 * print_listint - prints all the elements of a list listint_t
 * @h: head of a list
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t pgnodes = 0;
	const listint_t *no = h;

	while (h)
	{
		pgnodes++;
		printf("%d\n", no->n);
		no = h->next;
	}
	return (pgnodes);
}
