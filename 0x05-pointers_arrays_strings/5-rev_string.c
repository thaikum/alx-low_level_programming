#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char *z;
	int x = strlen(s), y = 0;

	strcpy(z, s);
	for (; x >= 0; x--, y++)
		s[y] = z[x];
}
