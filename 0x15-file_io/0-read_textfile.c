#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile -  reads a text file and prints it to the standard output.
 *
 * @filename: file path
 * @letters: The number of characters to read
 *
 * Return: number of letters it could read and print, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	ssize_t nb_let;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	nb_let = read(fd, buf, letters);
	if (nb_let == -1)
		return (0);

	buf[nb_let] = '\0';

	nb_let = write(STDOUT_FILENO, buf, nb_let);

	if (nb_let == -1)
		return (0);

	close(fd);

	return (nb_let);
}
