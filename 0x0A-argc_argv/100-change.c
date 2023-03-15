#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: list of values
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int num, pointer = 0, coins[] = {25, 10, 5, 2, 1}, t = 0;

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}

	num = atoi(argv[1]);

	while (num > 0)
	{
		if (num >= coins[pointer])
		{
			num -= coins[pointer];
			t++;
		}
		else
			pointer++;
	}
	printf("%d\n", t);

	return (0);
}
