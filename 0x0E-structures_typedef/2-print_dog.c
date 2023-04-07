#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints all values of dog struct
 * @d: the dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %.6f\nOwner: %s\n",
	       (d->name == NULL ? "(nil)" : d->name),
	       d->age,
	       (d->owner == NULL ? "(nil)" : d->owner));
}
