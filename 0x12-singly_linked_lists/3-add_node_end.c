#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add a new node as the head of the list
 * @head: current list head
 * @str: the string to add to the new tail
 * Return: new tail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *cur_node = *head;

	if (new_node == NULL)
		return (NULL);

	while (cur_node && cur_node->next)
		cur_node = cur_node->next;

	new_node->str = strdup(str);
	new_node->next = NULL;
	new_node->len = strlen(str);

	if (cur_node)
		cur_node->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
