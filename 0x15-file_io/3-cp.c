#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * buffer_file - copies the content of a file to another file
 * and create it if not exist
 *
 * @from: The name of the file from which we want to copy the content
 * @to: The name of the file from which we want to paste the content to
 *
 * Return: Nothing
 */
void buffer_file(char *from, char *to)
{
	int fd_from, fd_to, ck_from, ck_to;
	char *buff;
	ssize_t rd = 1024, wr;

	buff = malloc(1024);
	if (buff == NULL)
		dprintf(STDERR_FILENO, "Memory allocation error\n"), exit(1);

	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);

	fd_to = open(to, O_TRUNC | O_WRONLY | O_CREAT, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to), exit(99);

	while (rd != 0)
	{
		rd = read(fd_from, buff, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);

		wr = write(fd_to, buff, rd);
		if (wr == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to), exit(99);
	}

	ck_from = close(fd_from);
	if (ck_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ck_from), exit(100);

	ck_to = close(fd_to);
	if (ck_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ck_to), exit(100);
}
/**
 * main - copies the content of a file to another file.
 *
 * @argc: number of arguments on the command
 * @argv: array of pointers to strings
 *
 * Return: always 0 if success
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer_file(argv[1], argv[2]);
	return (0);
}
