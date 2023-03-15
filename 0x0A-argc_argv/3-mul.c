#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: size of argv
 * @argv: an array
 *
 * Return: 0 always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int a, b, prod;

	if (argc != 3)
		printf("Eror\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		prod = a * b;
		printf("%d\n", prod);
	}
	return (0);
}
