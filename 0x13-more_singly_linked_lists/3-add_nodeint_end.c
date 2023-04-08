#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node as the head of the list
 * @head: current list head
 * @n: the number to add to the new tail
 * Return: new tail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *cur_node = *head;

	if (new_node == NULL)
		return (NULL);

	while (cur_node && cur_node->next)
		cur_node = cur_node->next;

	new_node->n = n;
	new_node->next = NULL;

	if (cur_node)
		cur_node->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
