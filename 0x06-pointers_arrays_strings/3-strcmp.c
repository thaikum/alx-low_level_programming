/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 if equal or positive or negative if not equal
 */
int _strcmp(char *s1, char *s2)
{
	int ind = 0, a, b;

	while (s1[ind] != '\0')
	{
		if (s2[ind] == '\0')
		{
			a = s1[ind];
			return (a);
		}
		if (s1[ind] != s2[ind])
		{
			a = s1[ind];
			b = s2[ind];
			return (a - b);
		}
		ind++;
	}

	if (s2[ind] != '\0')
		return (s2[ind] == '\0');

	return (0);
}
