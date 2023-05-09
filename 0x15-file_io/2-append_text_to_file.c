#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends data to file
 * @filename: the name of the file
 * @text_content: what to append
 *
 * Return: 1 if it succeeds and -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);

	char *content = text_content ? text_content : "";

	if (fd < 0 || !filename)
		return (-1);

	write(fd, content, strlen(content));
	close(fd);

	return (1);
}
