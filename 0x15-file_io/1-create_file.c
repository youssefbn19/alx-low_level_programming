#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_file - creates a new file descriptor
 *
 * @filename: file name
 * @text_content: file content
 *
 * Return: 1 if it success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t check;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);


	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		check = write(fd, text_content, len);
		if (check == -1)
			return (-1);
	}

	return (1);
}
