/**
 * leet - replaces aeotl with 43071
 * @src: string to replace
 *
 * Return: the replaces string
 */
char *leet(char *src)
{
	char str1[] = "aeotlAEOTL";
	char str2[] = "4307143071";

	int x, y;

	for (x = 0; src[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (src[x] == str1[y])
			{
				src[x] = str2[y];
				break;
			}
		}
	}
	return (src);
}
