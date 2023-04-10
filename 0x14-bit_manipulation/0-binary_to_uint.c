#include <string.h>
#include <stddef.h>

/**
 * pow - powers a number
 * @x: the base
 * @y: the index
 *
 * Return: x ^ y;
 */
int _pow(int x, int y)
{
	int result = 1;

	for (; y > 0; y--)
		result *= x;

	return (result);
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string of binary numbers
 *
 * Return: resulting unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, pwer = 0;
	int len;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;

	for(; len >=0; len--, pwer++)
	{
		if (b[len] == '1')
			result += _pow(2, pwer);
		else if (b[len] != '0')
			return (0);
	}
	return (result);
}
