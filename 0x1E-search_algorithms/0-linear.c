#include "search.h"
#include <stdio.h>
/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located if it's found,
 * otherwise return -1 If value is not present in array or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t i = 0;

		for (; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
