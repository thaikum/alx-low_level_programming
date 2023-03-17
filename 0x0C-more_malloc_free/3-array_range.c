#include <stdlib.h>

/**
 * array_range - creates an array and populates it with numbers from min to max
 * @min: the minimum
 * @max: the maximum
 *
 * Return: the newly created array
 */
int *array_range(int min, int max)
{
	int *nums, x = 0;

	if (min > max)
		return (NULL);

	nums = malloc((max - min + 1) * sizeof(int));

	if (!nums)
		return (NULL);

	for (; min <= max; min++, x++)
		nums[x] = min;

	return (nums);
}
