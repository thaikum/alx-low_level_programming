#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to the head of the list
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		size++;
		printf("[%d] %s\n",(h->str == NULL ? 0 : h->len),
		       (h->str == NULL ? "(nil)" : h->str));
		h = h->next;
	}

	printf("[%d] %s\n",(h->str == NULL ? 0 : h->len),
                       (h->str == NULL ? "(nil)" : h->str));

	return (size + 1);
}
