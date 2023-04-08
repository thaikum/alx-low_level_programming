#include <stdio.h>
#include "lists.h"

/**
 * listint_len - calculates the length of the list
 * @h: pointer to the head of the list
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
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
