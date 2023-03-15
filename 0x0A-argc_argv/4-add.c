#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * invalid - checks whether a string contains an invalid character
 * @str: the string to check
 *
 * Return: 1 if string is invalid and 0 if not
 */
int invalid(char *str)
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
	int x, sum = 0, num;

	for (x = 1; x < argc; x++)
	{
		if (invalid(argv[x]))
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(argv[x]);
		sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
