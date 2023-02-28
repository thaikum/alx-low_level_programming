#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char z[strlen(s)];
	int x = strlen(s) - 1, y = 0;

	strcpy(z, s);
	for (; x >= 0; x--, y++)
		s[y] = z[x];
}
