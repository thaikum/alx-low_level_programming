#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a list
 * @head: the list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
