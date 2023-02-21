
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
			print(n);
			_putchar(',');
			_putchar(' ');
		}
	else
		for (; n >= 99; n--)
		{
			k = n;
			print(n);
			_putchar(',');
			_putchar(' ');
		}
	print(98);
}

/**
 * print - uses _putchar to print a number
 */
void print(int n)
{
	if (n < 0){
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n/10);

	_putchar('0' + n % 10);
}
