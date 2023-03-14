#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: duplicate string pointer or NULL
 */
char *_strdup(char *str)
{
	unsigned int size, x;
	char *dup;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	dup = malloc((size + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		dup[x] = str[x];

	return (dup);
}
