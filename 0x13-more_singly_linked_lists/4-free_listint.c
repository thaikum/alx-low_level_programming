
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees memory
 * @head: the first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *cur_ptr = NULL;

	if (head == NULL)
		return;

	while (head->next)
	{
		cur_ptr = head->next;
		free(head);
		head = cur_ptr;
	}
	free(head);
}
