#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a new node as the head of the list
 * @head: current list head
 * @str: the string to add to the new head
 * Return: new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = strlen(str);

	*head = new_node;

	return (new_node);
}
