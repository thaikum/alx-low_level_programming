#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to the head of the list
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	printf("%d\n", h->n);
	return (size + 1);
}
