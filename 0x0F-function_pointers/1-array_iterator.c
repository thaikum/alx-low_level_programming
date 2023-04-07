#include <stddef.h>

/**
 * array_iterator - executes a function given as parameter on each element
 * @array: the array
 * @size: the size of the array
 * @action: the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (action == NULL || array == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
