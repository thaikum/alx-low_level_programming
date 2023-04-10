#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads the content of a text file
 * @filename: the name of the file to read
 * @letters: number of letters to read
 *
 * Return: actual characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t s;
	char *buff = malloc(letters * sizeof(char));
	ssize_t errors[] = {11, 9, 89, 14, 27, 4, 22, 5, 1};
	int x;

	if (!fd || !buff || !filename)
	{
		free(buff);
		return (0);
	}

	s = read(fd, buff, letters);

	for (x = 0; x < 9; x++)
		if (s == errors[x])
			return (0);

	if ( s == write(STDOUT_FILENO, buff, letters))
	{
		free(buff);
		buff = NULL;
		return (s);
	}
	return (0);

}
