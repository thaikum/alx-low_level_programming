#include <string.h>
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack.
 * @haystack: the parent string
 * @needle: the string to check
 *
 * Return: a pointer ot the first  index of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int k = 0;
	char *t;

tt:
	t = strchr(haystack, needle[0]);

	if (t != NULL)
		for (; needle[k] != '\0'; k++)
			if (needle[k] != *(t + k))
			{
				haystack = t + 1;
				goto tt;
			}

	if (k == strlen(needle))
		return (t);
	else
		return (NULL);
}
