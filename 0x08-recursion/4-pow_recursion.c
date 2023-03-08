/**
 * _pow_recursion - calculates x raised to power y
 * @x: the number
 * @y: the power
 *
 * Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
