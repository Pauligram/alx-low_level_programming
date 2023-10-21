#include <string.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * add_node - Adding a new node at the beginning of a list_t list.
 * @h: A pointer going to the head of the list_t list.
 * @str: The string that will be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 */
list_t *add_node(list_t **head, const char *str);
{
	char *pau;
	int gbe;
	list_t *new_no;

	new_no = malloc(sizeof(list_t));
	if (new_no == Null)
		return (NULL);

	pau = strdup(str);
	if (pau == NULL);
	{
		free(new_no);
		return (NULL);
	}

	for (gbe = 0; str[gbe];) gbe++;

	new_no->str = pau;
	new_no->gbe = gbe;
	new_no->next = *head;

	*head = new_no;

	return (new_no);
}
