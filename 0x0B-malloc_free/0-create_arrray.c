#include <stdlib.h>

/**
 * create_array - creates an array of characters and initializes it with a
 * specific char
 * @size: size of the array to be created
 * @c: the character to initialize the array with
 *
 * Return: an array or Null
 */
char *create_array(unsigned int size, char c)
{
	char *l;
	unsigned int x;

	if (size <= 0)
		return (NULL);

	l = malloc(size * sizeof(char));

	if (l == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		l[x] = c;
	}
	return (l);
}
