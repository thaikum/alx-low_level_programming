/**
 * palindrome - checks whether a string is a plindrome
 * @s: the string
 * @f: strarting point
 * @l: ending point
 *
 * Return: 1 if palindrome 0 if not
 */
int palindrome(char *s, int f, int l)
{
	if (f < l && s[f] == s[l])
		return (palindrome(s, f + 1, l - 1));
	else if (f >= l)
		return (1);
	else
		return (0);
}

/**
 * is_palindrome - calls the palindrome checker
 * @s: the string
 *
 * Return: 1 if palindrome o if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s) - 1;

	return (palindrome(s, 0, len));
}
