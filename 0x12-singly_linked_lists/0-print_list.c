#include <stdio.h>
#include "lists.h"

/*
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list
 * 
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	while (h)
	{
		if (h->str == NULL )
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		
		:nodes++;
		h = h->next;
	}
	return (nodes);
}
