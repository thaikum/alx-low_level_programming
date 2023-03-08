#include "main.h"

/**
 * print_chessboard - prints a two dimensional array of 8 8
 * @a: the array
 */
void print_chessboard(char (*a)[8])
{
	int x = 0, y;

	for (; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
