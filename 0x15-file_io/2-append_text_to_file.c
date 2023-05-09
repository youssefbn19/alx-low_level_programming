#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: file name
 * @text_content: content to append
 *
 * Return: 1 if it success, -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t check;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		check =  write(fd, text_content, len);
		if (check == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
