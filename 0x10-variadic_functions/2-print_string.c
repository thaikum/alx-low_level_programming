#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings in vargs separated using the separater
 * @separator: vargs separator on print
 * @n: number of strings
 * @...: the vargs
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *k;
	unsigned int x;

	va_start(ap, n);

	for (x = 0; x < n; x++)
	{
		k = va_arg(ap, char *);

		if (x != n - 1)
			printf("%s%s", (k == NULL ? "(nil)" : k), separator);
		else
			printf("%s\n", (k == NULL ? "(nil)" : k));
	}
}
