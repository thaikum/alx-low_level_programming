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

	dim = (int **)malloc((height + 1) * (1 + width) * sizeof(int));
	if (dim == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		k = malloc(width * sizeof(int));

		if (k == NULL)
		{
			x--;
			while (x >= 0)
			{
				free(dim[x]);
				x--;
			}
			free(dim);
			return (NULL);
		}
		dim[x] = k;
	}

	return (dim == NULL ? NULL : dim);
}
