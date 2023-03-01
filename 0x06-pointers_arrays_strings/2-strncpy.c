#include <string.h>

/**
 * _strncpy - concatenates two strings
 * @dest: the destination string
 * @src: the string to copy
 * @n: the number of characters from src to copy to dest
 *
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
