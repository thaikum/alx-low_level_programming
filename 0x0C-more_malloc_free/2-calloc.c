#include <stdlib.h>

/**
 * _calloc - ressemles lib calloc
 * @nmemb: size
 * @size: size
 *
 * Return: initialized pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	return (result);
}
