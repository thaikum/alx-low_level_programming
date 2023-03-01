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
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
