#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a node at the begining of the list
 * @head: the list head
 * @n: the value
 *
 * Return: the newly created list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		h = *head;
		while (h)
		{
			if (!(h->next))
			{
				h->next = new_node;
				new_node->prev = h;
				break;
			}
			h = h->next;
		}
	}

	return (new_node);
}
