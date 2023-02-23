#include "main.h"

/**
 * print_line - prints _ n times
 * @n: number of times to print _
 *
 */
void print_line(int n)
{
	while (n--)
		_putchar('_');
	_putchar('\n');
}
