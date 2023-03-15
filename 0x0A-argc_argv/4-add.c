#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (x = 1; x < argc; x++)
		{
			num = atoi(argv[x]);

			if (num == 0 && strcmp(argv[x], "0") != 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += num;
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
