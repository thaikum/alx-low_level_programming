#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a node at a specific index
 * @h: the head
 * @idx: the index
 * @n: the value
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t iter = *h, new_node;

	while (iter
