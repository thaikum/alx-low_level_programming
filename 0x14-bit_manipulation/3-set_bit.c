/**
 * set_bit - sets bit at index to 1
 * @n: the number
 * @index: the index to change
 *
 * Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1ul << (index));
	return (1);
}
