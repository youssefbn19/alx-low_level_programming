#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an index of integer.
 *
 * @array: array of integers to search in.
 * @size: number of integers in the array.
 * @cmp: function pointer that will do the search.
 *
 * Return: index of the number if exist in the array. 0 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)) > 0)
				return (i);
		}
	}

	return (-1);
}
