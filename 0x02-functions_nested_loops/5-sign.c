#include "main.h"

/**
 * print_sign - this function determines whether a number is
 * or 0, positive or negative
 * @n: the number to be checked;
 *
 * Return: + if positive, - if negative and 0 if 0
 */
int print_sign(int n)
{
	return (n > '0' ? 1 : n < '0' ? -1 : 0);
}
