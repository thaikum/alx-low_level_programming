#include <stdio.h>

/**
 * main - prints all the values in argv
 * @argc: size of argv
 * @argv: an array
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
