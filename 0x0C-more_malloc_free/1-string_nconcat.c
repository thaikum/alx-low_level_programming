#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of str2 to be concateneated
 *
 * Return: concatenated string or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	len2 = len2 <= n ? len2 : n;
	k = malloc((len1 + len2 + 1) * sizeof(char));

	if (k == NULL)
		return (NULL);

	strcpy(k, s1);
	strncat(k, s2, len2);
	return (k);
}
