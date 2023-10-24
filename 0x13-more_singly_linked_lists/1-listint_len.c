#include "lists.h"
#include <stdio.h>

/*
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of a list
 *
 * Return: numbers of element
 */

size_t listint_len(const listint_t *h)
{
	size_t pgnodes = 0;

	while (h != NULL)
	{
		pgnodes++;
		h = h->next;
	}
	return (pgnodes);
}
