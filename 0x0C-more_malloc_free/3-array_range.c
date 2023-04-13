#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: min value in the array
 * @max: max value int the array
 *
 * Return: the pointer to the newly created array. NULL if it fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, avg;

	if (min > max)
		return (NULL);

	avg = max - min + 1;
	ptr = malloc(avg * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < avg; i++)
		*(ptr + i) = (min + i);

	return (ptr);
}
