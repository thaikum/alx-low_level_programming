#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: the list head
 * @index: index to delete
 *
 * Return: 1 if successful and -1 if otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;

	listint_t *current_node = *head, *prev_node = *head;

	if (!head || !(*head))
		return (-1);

	for (x = 0; current_node && x <= index; x++, prev_node = current_node,
		     current_node = current_node->next)
	{
		if (x == index || index == 0)
		{
			if (index == 0)
				*head = current_node->next;
			else
				prev_node->next = current_node->next;

			free(current_node);
			return (1);
		}
	}
	return (-1);
}
