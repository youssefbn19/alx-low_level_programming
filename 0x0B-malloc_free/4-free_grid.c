#include <stdlib.h>
/**
 * free_grid - frees a 2D array allocated space
 *
 * @grid: grid or the array needs to be free
 * @height: grid columns
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
