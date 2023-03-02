
/**
 * string_toupper - converts all uppercase letters to lowercase
 * @str: the string
 *
 * Return: an uppercase string
 */
char *string_toupper(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] -= 32;
		x++;
	}
	return (str);
}
