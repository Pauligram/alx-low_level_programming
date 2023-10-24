#include "lists.h"

/*
 * delete nodeint at index -deletes the node at index of a listint t list.
 * @head:pointer to the list.
 * @index:position of the node to delete.
 * Return: 1 if it succeed, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux_node = *head;
	listint_t *node_to_delete = *head;
	unsigned int xyz;
	unsigned int non = 0;

	if (!(*head))
		return(-1);


	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}


	xyz = index - 1;
	while (aux_node && non != xyz)
	{
		non++;
		aux_node = aux_node->next;
	}


	if (non == xyz && aux_node)
	{
		node_to_delete = aux_node->next;
		aux_node->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}

	return (-1);
}
