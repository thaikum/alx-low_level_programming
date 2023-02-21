#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @n: the number to determine its last digit
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	_putchar('0' + n % 10);
	return (n % 10);
}
