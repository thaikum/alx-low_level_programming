#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string pointer or NULL;
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, x, y = 0;
	char *str;

	size1 = s1 == NULL ? 0 : strlen(s1);
	size2 = s2 == NULL ? 0 : strlen(s2);

	str = malloc((size1 + size2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (x = 0; x < size1; x++, y++)
		str[y] = s1[x];

	for (x = 0; x < size2; x++, y++)
		str[y] = s2[x];

	str[y] = '\0';

	return (str);
}
