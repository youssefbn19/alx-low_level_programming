#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals of
 *a square matrix of integers
 *
 *@a: array pointer
 *@size: array size
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int fd, sd;

	fd = sd = 0;
	for (i = 0; i < size; i++)
	{
		j = i;
		fd += *(a + (i * size + j));
	}

	for (i = 0; i < size; i++)
	{
		sd += *(a + (i * size + j));
		j--;
	}

	printf("%d, %d\n", fd, sd);

}
