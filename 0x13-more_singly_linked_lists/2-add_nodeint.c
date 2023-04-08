#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node as the head of the list
 * @head: current list head
 * @n: the number to add to the new head
 * Return: new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
