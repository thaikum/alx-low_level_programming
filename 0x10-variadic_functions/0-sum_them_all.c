#include <stdarg.h>

/**
 * sum_them_all - sums all integers parsed
 * @n: size of the vargs
 * @...: the vargs
 *
 * Return: Sum of the vargs
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (x = 0; x < n; x++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
