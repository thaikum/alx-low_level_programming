#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of the list
 * @h: list head
 *
 * @Return: the size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;
	while(h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
