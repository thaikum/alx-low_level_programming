#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - prints all elements of the list
 * @h: list head
 *
 * Return: the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
