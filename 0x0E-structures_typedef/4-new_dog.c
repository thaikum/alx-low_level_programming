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
	char *n_name = malloc(sizeof(name)), *n_owner = malloc(sizeof(owner));
	dog_t *d = malloc(1 * sizeof(dog_t));

	if (d == NULL)
	{
		free(n_owner);
		free(n_name);
		exit(98);
	}

	n_name = name;
	n_owner = owner;

	d->name = n_name;
	d->age = age;
	d->owner = n_owner;

	return (d);
}
