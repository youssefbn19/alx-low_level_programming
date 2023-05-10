#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * error_file - prints an error to the standard error
 *
 * @err: error message
 * @str: The sequel to the error message
 * @ex: exit number
 *
 * Return: Nothing
 */
void error_file(char *err, char *str, int ex)
{
	char msg[100];
	int len = 0, i = 0;


	while (err[i])
	{
		msg[i] = err[i];
		len++;
		i++;
	}
	i = 0;
	while (str[i])
	{
		msg[len] = str[i];
		len++;
		i++;
	}
	msg[len] = '\n';
	len++;
	write(STDERR_FILENO, msg, len);
	exit(ex);
}
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
	char *buff, cl[1];
	ssize_t rd = 1024, wr;

	buff = malloc(1024);
	if (buff == NULL)
		error_file("Memory allocation error", "", 1);

	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
		error_file("Error: Can't read from file ", from, 98);

	fd_to = open(to, O_TRUNC | O_WRONLY | O_CREAT, 0664);
		if (fd_to == -1)
			error_file("Error: Can't write to ", to, 99);

	while (rd == 1024)
	{
		rd = read(fd_from, buff, 1024);
		if (rd == -1)
			error_file("Error: Can't read from file ", from, 98);

		wr = write(fd_to, buff, rd);
		if (wr == -1)
			error_file("Error: Can't write to ", to, 99);
	}

	ck_from = close(fd_from);
	if (ck_from == -1)
	{
		cl[0] = fd_from + '0';
		error_file("Error: Can't close fd ", cl, 100);
	}

	ck_to = close(fd_to);
	if (ck_to == -1)
	{
		cl[0] = fd_to + '0';
		error_file("Error: Can't close fd ", cl, 100);
	}
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
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	buffer_file(argv[1], argv[2]);
	return (0);
}
