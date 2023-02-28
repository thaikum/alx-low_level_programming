#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *str)
{
	int x = strlen(str);

	while(x--)
		_putchar(str[x+1]);
}
