#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * pop_listint - removes the head
 * @head: current head
 *
 * Return: value in head
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *swap_space;

	if (!head && !(*head))
		return (0);

	n = (*head)->n;
	swap_space = (*head)->next;
	/*free(*head);*/
	head = &swap_space;
	return (n);
}
