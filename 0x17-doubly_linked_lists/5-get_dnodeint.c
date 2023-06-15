#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at position index
 * @head: the list head
 * @index: the index to fetch
 *
 * Return: node at index x or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (!head)
	{
		return (NULL);
	}
	else
	{
		for (; head; x++, head = head->next)
			if (x == index)
				return (head);
	}

	return (NULL);
}
