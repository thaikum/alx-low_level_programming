#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers separated by separator followed by a new line
 * @separator: the separator to be used to print numbers.
 * @n: size of vargs
 * @...: the vargs
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	char *sep = separator == NULL ? "" : separator;

	va_start(ap, n);

	for (x = 0; x < n - 1; x++)
		printf("%d%s", va_arg(ap, int), sep);

	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
