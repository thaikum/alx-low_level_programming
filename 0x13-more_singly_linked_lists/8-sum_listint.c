#include <stddef.h>
#include "lists.h"

/**
 * sum_list - sums all elements of a list
 * @head: the first element of the list
 *
 * Return: the sum of all the elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while(head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
