#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at position index
 * @head: the first element of the list
 * @index: the index of the required element
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; (head || head->next) && k < index; k++)
		head = head->next;

	if (k == index)
		return (head);

	return (NULL);
}
