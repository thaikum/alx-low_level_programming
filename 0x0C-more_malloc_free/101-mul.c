#include <stdio.h>
#include <stdlib.h>

/**
 * invalid - checks whether a string contains an invalid character
 * @str: the string to check
 *
 * Return: 1 if string is invalid and 0 if not
 */
int invalid(const char *str)
{
	int x = 0;

	for (; str[x] != '\0'; x++)
		if (str[x] < '0' || str[x] > '9')
			return (1);
	return (0);
}

/**
 * main - prints the sum of the arguments
 * @argc: number of arguments
 * @argv: actual arguments
 *
 * Return: 0 if successful or 1 if not
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (invalid(argv[1]) || invalid(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%.0f\n", atof(argv[1]) * atof(argv[2]));

	return (0);
}
