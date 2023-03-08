/**
 * prime - checks if n is prime
 * @n: number to check
 * @div: divisor
 *
 * Return: 1 if is prime else 0
 */
int prime(int n, int div)
{
	if (n % div != 0 && div < n / 2)
		return (prime(n, div + 1));
	else if (n % div == 0)
		return (0);
	else
		return (1);
}

/**
 * is_prime_number - determines whether a number is a prime number
 * @n: the number ot determine
 *
 * Return: 1 if prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	else
		return (prime(n, 2));
}
