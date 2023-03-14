#include <stdlib.h>
#include <string.h>

/**
 * count_size - counts the number of spaces
 * @str: the string to count spaces
 *
 * Return: the number of real spaces
 */
int count_size(char *str)
{
	int started = 0, space_flag = 0, spaces = 0, x;

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
	return (spaces);
}

/**
 * initializer - initializes the empty array final with str values
 * @spaces: size of the array
 * @str: non splited string
 * @final: splited string
 */
void initializer(int spaces, char *str, char **final)
{
	int y = 0, x, counter = 0, started;

	for (x = 0; x <= spaces; x++)
	{
		started = 0;
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
}

/**
 * strtow - splits a string
 * @str: string to split
 *
 * Return: splited string
 */
char **strtow(char *str)
{
	char *each, **final;
	int spaces = 0, x, started = 0;
	int y = 0, sub_size = 0;

	if (str == NULL || strcmp(str, "") == 0 || strcmp(str, " ") == 0)
		return (NULL);
	spaces = count_size(str);
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
				if (str[y + 1] == '\0')
				{
					each = malloc((sub_size + 1) * sizeof(char));
					final[x] = each;
				}
			}
			else if (str[y] == ' ' && started == 1)
			{
				each = malloc((sub_size + 1) * sizeof(char));
				final[x] = each;
				break;
			}
		}
	}
	initializer(spaces, str, final);
	final[x] = NULL;
	return (final);
}
