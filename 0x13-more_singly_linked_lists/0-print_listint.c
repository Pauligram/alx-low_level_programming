#include "lists.h"

/*
 * print_listint - prints all the elements of a list listint_t
 * @h: head of a list
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *no = h;
	size_t pgnodes = 0;

	while (no)
	{
		printf("%d\n", no->n);
		pgnodes++;
		no = no->next;
	}
	return (pgnodes);
}
