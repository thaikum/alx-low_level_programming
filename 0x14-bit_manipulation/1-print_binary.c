#include "main.h"

/**
 * to_binary - prints the binary of a number
 * @n: the number
 * @power: is initially 0. indicates the index on the binary string
 */
void to_binary(unsigned long int n, int power)
{
	char k;

	if ((n >> power) == 0)
		return;

	to_binary(n, power + 1);
	k = ((1ul << power) & n) ? '1' : '0';
	_putchar(k);
}

/**
 * print_binary - calls the above function with a 0 as power
 * @n: the number to print;
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		to_binary(n, 0);
}
