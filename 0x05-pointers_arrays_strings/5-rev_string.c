#include <string.h>
/**
 * rev_str - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	char *z = s;
	int x = strlen(s), y = 0;

	for (; x >= 0; x--, y++)
		s[y] = z[x];
}
