#include <stdio.h>
/**
 * main - prints all the program command line arguments
 *
 * @argc: The number of command line arguments
 * @argv: array of  the program command line arguments
 *
 * Return: 0 always if successed
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i++]);
	}
	return (0);
}
