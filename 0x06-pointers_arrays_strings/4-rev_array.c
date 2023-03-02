/**
 * reverse_array - reverses an array of integers
 * @a: the array
 * @n: the size
 */
void reverse_array(int *a, int n)
{
	int x, y = n - 1, temp;

	for (x = 0; x < y; x++, y--)
	{
		temp = a[x];
		a[x] = a[y];
		a[y] = temp;
	}
}
