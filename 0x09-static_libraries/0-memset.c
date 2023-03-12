/**
 * _memset - fills the first n bytes of memofy area pointed to by s
 * with a constant byte b
 * @s: the location to copy to
 * @b: character to copy
 * @n: number of times
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	for (; k < n; k++)
	{
		s[k] = b;
	}
	return (s);
}
