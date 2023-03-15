#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: size of argv
 * @argv: an array
 *
 * Return: 0 always
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
