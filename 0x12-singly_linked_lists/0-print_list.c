#include <stdlib.h>
#include "lists.h"

/**
 *list_len - returns the number of the elements in a linked list
 *
 * @h: pointer to the list_t list
 *
 * Return: number of elememts in h
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%lu] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
		printf("[%lu] %s\n", h->len, h->str);
		return (i);
	}

