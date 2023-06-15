#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a node at the begining of the list
 * @head: the list head
 * @n: the value
 *
 * Return: the newly created list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	if ((*head) != NULL)
		(*head)->prev = new_node;

	new_node->next = (*head);
	new_node->prev = NULL;
	new_node->n = n;
	*head = new_node;

	return (new_node);
}
