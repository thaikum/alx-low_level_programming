#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_at_index - inserts a node at a specific index
 * @head: the first element of the list
 * @idx: the index to insert at;
 * @n: the value to insert
 *
 * Return: the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k = 0;
	listint_t *current_node = *head, *swap_space;

	do
	{
		if (idx - k == 1 || idx == 0)
		{
			swap_space = malloc(sizeof(listint_t));
			if (!swap_space)
				return (NULL);

			swap_space->n = n;
			swap_space->next = idx != 0 ?
				current_node->next : current_node;

			if (idx != 0)
				current_node->next = swap_space;
			else
				*head = swap_space;
			return (swap_space);
		}
		k++;
		current_node = current_node->next;
	} while (current_node);
	return (NULL);
}
