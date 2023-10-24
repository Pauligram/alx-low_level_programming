#include "lists.h"
#include <stdio.h>
/*
 * print_listint - prints all the elements of a list
 * @h: head of a list
 *
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t pgnodes =0;

	while (h != NULL)
	{
		pgnodes++;
		printf("%d\n", h->n);
		h =h->next;
	}
	return (pgnodes);
}
