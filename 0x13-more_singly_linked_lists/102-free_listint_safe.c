#include "lists.h"
#include <stdio.h>

/*
 * free_listint_
 * @head: head
 * Return: no return
 */

void free_listint_safe(listp_t **head)
{
	listp_t *paul;
	listp_t *gbeke;

	if (head != NULL)
	{
		gbeke = *h;
		while ((paul = gbeke) != NULL)
		{
			gbeke = gbeke->next;
			free(paul);
		}
		*h = NULL;
	}
}

