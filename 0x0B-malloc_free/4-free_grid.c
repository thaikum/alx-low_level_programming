#include <stdlib.h>
/**
 * free_grid - frees a two dimensional array using free
 * @grid: the two dimensional array
 * @height: the height of the two dimensional array
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
}
