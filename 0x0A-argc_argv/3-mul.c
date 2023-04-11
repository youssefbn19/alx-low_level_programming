#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the multiplication of
 *two numbers of command line arguments
 *
 * @argc: The number of command line arguments
 * @argv: array of  the program command line arguments
 *
 * Return: 0 always if successed
 */
int main(int argc, char *argv[])
{

	if (argc == 3)
		printf("%d\n", atoi(argv[argc - 1]) * atoi(argv[argc - 2]));
	else
		printf("Error\n");
	return (0);
}
