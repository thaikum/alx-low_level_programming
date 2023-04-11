#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 * @filename: the files name
 * @text_content: contents of the file
 *
 * Return: 1 if successful or -1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd = open(filename,
		O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR, 600);
	char *content = text_content ? text_content : "";

	if (fd < 0 || !filename)
		return (-1);

	write(fd, content, strlen(content));
	close(fd);

	return (1);
}
