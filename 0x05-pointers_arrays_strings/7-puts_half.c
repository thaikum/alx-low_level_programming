#include <string.h>
#include "main.h"

/**
 * puts_half - prints the half of the string
 * @str: the string itself
 */
void puts_half(char *str)
{
	int n = strlen(str) / 2, k;

	while(str[n] != '\0')
	{
		_putchar(str[k]);
		n++;
	}
	_putchar('\n');
}
