#include <stdio.h>
#include "lists.h"

/**
 * list_len - calculates the length of the list
 * @h: pointer to the head of the list
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		size++;
		h = h->next;
	}

	return (size + 1);
}
