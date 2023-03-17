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
	unsigned int x = 0;
	char p = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	for (; x < nmemb * size; x++)
		((char *)result)[x] = p;
	return (result);
}
