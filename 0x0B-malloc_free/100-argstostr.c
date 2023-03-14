#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments in a program
 * @ac: argument count
 * @av: actual arguments
 *
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int size = 0, x;
	char *str;

	if (ac <= 0)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		size += (int) strlen(*(av + x)) + 1;
	}

	str = malloc((size + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		if (*(*av + x) != '\0')
			str[x] = *(*av + x);
		else
			str[x] = '\n';
	}

	return (str);
}
