#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - copies the content of one file to another
 * @ac: length of av
 * @av: an array containing file names i.e 0: from 1:to
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buffer[1025];
	ssize_t s;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (!fd_from)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (!fd_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	s = read(fd_from, buffer, 1024);
	while (s > 0)
	{
		write(fd_to, buffer, s);
		s = read(fd_from, buffer, 1024);
	}
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from || fd_to)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d",
			(fd_from ? fd_from : fd_to));
		exit(100);
	}
	return (0);
}
