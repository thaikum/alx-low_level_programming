#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - creates a new dog struct and returns it
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(1 * sizeof(dog_t));

	if (d == NULL)
		exit(98);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
