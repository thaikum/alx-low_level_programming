#include "main.h"

/**
 * main - fizbzbuzz
 *
 * Return: always 0
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 == 0)
			print("FizzBuzz");
		else if (k % 3 == 0)
			print("Fizz");
		else if (k % 5 == 0)
			print("Buzz");
		else
			print_number(k);

		_putchar(' ');
	}
	_putchar('\n');

	return (0);
}

/**
 * print - prints a word
 * @word: word to be printed
 *
 */
void print(char *word)
{
	int k = 0;

	while (word[k++] != '\0')
		_putchar(word[k - 1]);
}

/**
 * print_number - uses _putchar to print a number
 * @n: the number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print(n / 10);

	_putchar('0' + n % 10);
}
