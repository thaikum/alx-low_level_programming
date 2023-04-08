#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees memory
 * @head: the first element of the list
 */
void free_list(list_t *head)
{
	list_t *cur_ptr = NULL;

	if (head == NULL)
		return;

	while(head->next)
	{
		cur_ptr = head->next;
		free(head->str);
		free(head);
		head = cur_ptr;
	}
	free(head->str);
	free(head);
}
