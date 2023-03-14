#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array
 * @width: width of the matrix
 * @height: height of the matrix;
 *
 * Return: two dimensional array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **dim, *k, x;

	if (width == 0 && height == 0)
		return (NULL);

	dim = (int **)malloc(height * width * sizeof(int));
	for (x = 0; x < height; x++)
	{
		k = malloc(width * sizeof(int));
		dim[x] = k;
	}

	return (dim == NULL ? NULL : dim);
}
