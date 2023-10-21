#include "lists.h"
#include <stdio.h>

/*
 * add_node - Adding a new node at the beginning of a list_t list.
 * @h: A pointer going to the head of the list_t list.
 * @str: The string that will be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t l = 0;
	list_t *new_no;

	new_no = malloc(sizeof(list_t));
	if (new_no == NULL)
		return (NULL);

	while (str[l])
		l++

			new_no->len = l

			new_no->str = strup(str);

	new_no->next = *head;

	*head = new_no;

	return (new_no);
}
