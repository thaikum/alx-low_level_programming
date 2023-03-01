#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the string to be added to the dest
 * @n: the number of characters from src to concatenate with dest
 *
 * Return: return a concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int s = strlen(dest), x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[s] = src[x];
		s++;
		x++;
	}

	dest[s] = '\0';

	return (dest);
}
