/**
 * count1 - counts number of 1 in a number binary
 * @n: number to count set bits
 *
 * Return: number of 1
 */
int count1(unsigned long int n)
{
	int x = 0;

	while (n > 0)
	{
		x++;
		n &= (n - 1);
	}
	return (x);
}

/**
 * flip_bits - count numbers that need to be fliped
 * @n: first number
 * @m: desired Number
 *
 * Return: bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int v = n ^ m;

	return (count1(v));
}
