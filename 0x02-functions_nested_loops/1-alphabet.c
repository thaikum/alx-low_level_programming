#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - this function prints all alphabets in lowercase
 *
 */
void print_alphabet()
{
	char alpha;

	for(alpha = 'a'; alpha != 'z' + 1; alpha++)
	{
		puthcar(alpha);
	}
	putchar('\n');
}
