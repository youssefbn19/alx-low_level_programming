#include <stdio.h>
/**
 * main - print the program's name
 *
 * @argc: The number of command line arguments
 * @argv: array of  the program command line arguments
 *
 * Return: 0 always if successed
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
