/**
 * swap_int - swaps two integers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;
}
