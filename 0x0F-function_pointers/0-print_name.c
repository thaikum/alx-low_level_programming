#include <stddef.h>
/**
 * print_name - prints a name based on a certain funciton
 * @name: the name to print
 * @f: the function ponter
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
