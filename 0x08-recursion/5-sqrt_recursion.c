/**
 * sqt - finds square root
 * @n: the number
 * @x: the count
 *
 * Return: square root
 */

int sqt(int n, int x)
{
	if (n - x == 0)
		return (x / 2);
	else if (n - x < 0)
		return (-1);
	else
		return (sqt(n - (x), x + 2));
}

/**
 * _sqrt_recursion - finds the square root.
 * @n: the number to find square root
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int k = sqt(n, 1) + 1;

	return (k * k == n ? k : -1);
}
