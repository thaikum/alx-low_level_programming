#include "main.h"

/**
 * print_to_98 - prints from n to 99
 * @n: the starting point
 */
void print_to_98(int n)
{
	int k;

	if (n < 98)
		for (; n < 98; n++)
		{
			if (n >= 10)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar(',');
			_putchar(' ');
		}
	else
		for (; n >= 99; n--)
		{
			k = n;

			while (k > 10)
			{
				_putchar(k / 10);
				k /= 10;
			}

			_putchar(',');
			_putchar(' ');
		}
	_putchar('9');
	_putchar('8');
}
