#include "lists.h"

/**
 * sum_dlistint - prints all elements of the list
 * @h: list head
 *
 * Return: sum of n in the list
 */
int sum_dlistint(dlistint_t *h)
{
	int x = 0;

	while (h)
	{
		x += h->n;
		h = h->next;
	}
	return (x);
}
