#include "lists.h"
/*
 * list_len - returns the numbers of elements in list_t
 * @h: constant pointer type list_t
 *
 * Return: numbers of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t na;
	na = 0;
	while (h)
	{
		na++;
		h = h->next;
	}
	return (na);
}
