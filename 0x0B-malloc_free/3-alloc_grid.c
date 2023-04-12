#include <stdlib.h>
/**
 * alloc_grid - create allocated space memory of 2D Array
 *
 * @width: array columns
 * @height: array rows
 *
 * Return: a pointer to a 2 dimensional array of integers.
 * NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		grid[i] = (int *)malloc(sizeof(int) * width);

	if (grid == NULL)
		return (NULL);


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
