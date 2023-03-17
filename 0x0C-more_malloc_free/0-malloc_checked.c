#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checks wheter malloc is ok and returns a pointer else exit
 * @b: the size to allocate
 *
 * Return: pointer to k
 */
void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);

	if (k == NULL)
		exit(98);
	return (k);
}
