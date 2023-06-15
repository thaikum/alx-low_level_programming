#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: list head
 * @index: index
 *
 * Return: 1 if successful -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *iter = *head;
	int ind = (int) index;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		if (iter)
			free(iter);
		return (1);
	}

	while (iter && ind >= 0)
	{
		if (ind == 0)
		{
			iter->prev->next = iter->next;
			free(iter);
			return (1);
		}
		iter = iter->next;
		ind--;
	}

	return (-1);
}
