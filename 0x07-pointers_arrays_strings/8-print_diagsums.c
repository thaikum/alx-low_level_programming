#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: the matrix
 * @size: the size of the integer
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, x = 0, y = 0;

	for (; x < size; x++, y++)
		sum1 += *(a + (x + y * size));

	for (x = 0, y = size - 1; x < size; x++, y--)
		sum2 += *(a + (x + y * size));

	printf("%d, %d \n", sum1, sum2);
}
