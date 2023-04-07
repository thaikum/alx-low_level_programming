#include <stddef.h>
/**
 * int_index - searches for an integer
 * @size: the number of elements in the array
 * @array: the array of integers
 * @cmp: the function pointer
 *
 * Return: the index of the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
		if (cmp(array[x]) != 0)
			return (x);

	return (-1);
}
