#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees memory
 * @head: the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *cur_ptr = NULL;

	if (!head || (*head) == NULL)
		return;

	while ((*head)->next)
	{
		cur_ptr = (*head)->next;
		free(*head);
		*head = cur_ptr;
	}
	free(*head);
	*head = NULL;
}
