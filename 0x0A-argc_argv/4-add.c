#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the sum of
 *the numbers of the command line arguments
 *
 * @argc: The number of command line arguments
 * @argv: array of  the program command line arguments
 *
 * Return: 0 always if successed, 1 if one of the argument not a number
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0 && *argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}


	return (0);
}
