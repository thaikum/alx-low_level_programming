/**
 * factorial - calculates the factorial of a number recursively
 * @n: the number to calculate its factorial
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
