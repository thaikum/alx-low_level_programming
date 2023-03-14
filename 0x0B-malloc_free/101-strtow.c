#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a sentence on its spaces
 * @str: the string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char *each, **final;
	int spaces = 0, x, space_flag = 0, started = 0;
	int y = 0, sub_size = 0, counter = 0;

	if (str == NULL || strcmp(str, ""))
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		if (started == 0)
		{
			if (str[x] != ' ')
				started = 1;
		}
		else
		{
			if (str[x] == ' ')
				space_flag = 1;
			else
			{
				if (space_flag == 1)
				{
					space_flag = 0;
					spaces++;
				}
			}
		}
	}

	final = malloc((spaces + 2) * sizeof(char *));

	if (final == NULL)
		return (NULL);

	for (x = 0; x <= spaces; x++)
	{
		started = 0;
		sub_size = 0;
		for (; str[y] != '\0'; y++)
		{
			if (str[y] != ' ')
			{
				sub_size++;
				started = 1;
				space_flag = 1;
			}
			else if (str[y] == ' ' && started == 1)
			{
				each = malloc((sub_size + 1) * sizeof(char));
				final[x] = each;
				break;
			}
		}
	}

	y = 0;

	for (x = 0; x <= spaces; x++)
	{
		started = 0;
		sub_size = 0;
		counter = 0;

		for (; str[y] != '\0'; y++)
		{
			if (str[y] != ' ')
			{
				final[x][counter] = str[y];
				counter++;
				started = 1;
			}
			else if (str[y] == ' ' && started == 1)
			{
				final[x][counter] = '\0';
				break;
			}
		}
	}

	final[x] = NULL;
	return (final);
}
