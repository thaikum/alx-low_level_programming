#include <stdlib.h>

/**
 * _realloc - reallocates memory blo using malloc and free
 * @ptr: the old pointer
 * @new_size: new array size
 * @old_size: old memory size
 *
 * Return: null or the new memory pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	void *newPtr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newPtr = malloc(new_size);

	if (!newPtr)
		return (NULL);

	if (ptr)
		for (x = 0; x < old_size; x++)
			((char *)newPtr)[x] = ((char *)ptr)[x];

	free(ptr);
	return (newPtr);
}
