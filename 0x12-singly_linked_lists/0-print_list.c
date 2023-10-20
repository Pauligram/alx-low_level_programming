#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for  (i = 1; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", (unsigned int)h->len, "(nil)");
		}

		else
		{
			printf("[%u] %s\n", (unsigned int)h->len, h->str);
		}
		h = h->next;
	}
	printf("[%u] %s\n", (unsigned int)h->len, "(nil)");
	return (i);
}
