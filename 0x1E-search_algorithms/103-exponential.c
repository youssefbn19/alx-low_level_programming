#include "search.h"
#include <stdio.h>
/**
 * print_array_elements - prints elements of an array and it starts and
 * ends from a given indexes.
 *
 * @array: A pointer to the first element of the array to search in.
 * @start: start index
 * @end: end index
 *
 * Return: nothing
 */
void print_array_elements(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");

	for (i = start; i < end; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

/**
 * binary_search_v2 - Searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @lower: The start index.
 * @higher: The end index
 * @value: The value to search for.
 *
 * Return: The index where value is located, otherwise return -1 if
 * value is not present in array or if array is NULL.
 */
int binary_search_v2(int *array, size_t lower, size_t higher, int value)
{
	size_t low = lower;
	size_t high = higher;
	size_t middle;

	if (array)
	{
		while (low <= high)
		{
			print_array_elements(array, low, high);
			middle = low + (high - low) / 2;
			if (array[middle] > value)
				high = middle - 1;
			else if (array[middle] < value)
				low = middle + 1;
			else
				return (middle);
		}
	}
	return (-1);
}
/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, otherwise return -1 if
 * value is not present in array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 1;

	if (array || size == 0)
	{
		while (high < size && array[high] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", high, array[high]);
			low = high;
			high *= 2;
		}
		if (high >= size)
			high = size - 1;
		printf("Value found between indexes [%ld] and [%ld]\n", low, high);
		return (binary_search_v2(array, low, high, value));
	}
	return (-1);
}
