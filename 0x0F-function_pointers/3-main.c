#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - simple calculator
 * @argc - number of arguments
 * @argv - arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int (*f)(int a, int b);

	if (argc != 4)
		exit(98);
	f = get_op_func(argv[2]);

	if (f != NULL)
		printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
