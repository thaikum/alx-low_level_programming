#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all the items in vargs irrespective or their type
 * @format: string that contains the types
 * @...: values to be printed
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	int x = 0, skip = 0;
	char *k;

	va_start(ap, format);
	while (format[x] != '\0')
	{
		switch (format[x])
		{
		case 's':
			k = va_arg(ap, char *);
			if (k == NULL)
				k = "(nil)";
			printf("%s", k);
			break;
		case 'c':
			putchar(va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		default:
			skip = 1;
		}
		if (format[x + 1] != '\0' && skip == 0)
		{
			x++;
			skip = 0;
			printf(", ");
			continue;
		}
		skip = 0;
		x++;
	}
	putchar('\n');
}
