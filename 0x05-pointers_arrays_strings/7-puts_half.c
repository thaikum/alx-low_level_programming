#include <string.h>
#include "main.h"

/**
 * puts_half - prints the half of the string
 * @str: the string itself
 */
void puts_half(char *str)
{
	int n = strlen(str) / 2, k;

	for (k = 0; k < n; k ++)
		_putchar(str[k]);
	_putchar('\n');
}
