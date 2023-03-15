#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: size of argv
 * @argv: an array
 *
 * Return: 0 always
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
