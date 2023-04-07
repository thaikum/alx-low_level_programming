#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts s two numbers
 * @a: first number
 * @b: second number
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - adds two numbers
 * @a: first number
 * @b: second number
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - adds two numbers
 * @a: first number
 * @b: second number
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error\n");
		exit(100);
	}
	return (a % b);
}
