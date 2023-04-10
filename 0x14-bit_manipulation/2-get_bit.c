#include "main.h"

/**
 * get_bit - get the bit at index given
 * @n: the number
 * @index: the index;
 *
 * Return: the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((1 << (index - 1) & n) ? 1 : 0);
}
