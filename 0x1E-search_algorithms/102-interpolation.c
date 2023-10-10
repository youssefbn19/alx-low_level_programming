#include "search.h"
#include <stdio.h>
/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, otherwise return -1 if
 * value is not present in array or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = -1;

	if (array)
	{
		while (low <= high)
		{
			pos = low + (((double)(high - low) / (array[high] - array[low])) *
			      (value - array[low]));
			pos = (size_t)pos;
			if (pos >= low && pos <= high)
			{
				printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
				if (array[pos] == value)
					return (pos);
				else if (array[pos] < value)
					low = pos + 1;
				else
					high = pos - 1;
			}
			else
			{

				printf("Value checked array[%ld] is out of range\n", pos);
				break;
			}
		}
	}
	return (-1);
}
