#include "search.h"
#include <math.h>
#include <stdio.h>
/**
 * min - Checks for the small number
 *
 * @num1: first number.
 * @num2: second number.
 *
 * Return: The small number
 */
size_t min(size_t num1, size_t num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}
/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the Jump search algorithm
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, otherwise return -1 if
 * value is not present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, jump_step;

	if (array)
	{
		start = 0;
		jump_step = 0;
		while (array[min(jump_step, size)] < value && size > 1)
		{
			start = jump_step;
			printf("Value checked array[%ld] = [%d]\n", start, array[start]);
			jump_step += (int)sqrt(size);
			if (start >= size)
				return (-1);
		}
		printf("Value found between indexes [%ld] and [%ld]\n", start, jump_step);
		while (array[start] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", start, array[start]);
			if (start == min(jump_step, size))
				return (-1);
			start++;
		}
		if (array[start] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", start, array[start]);
			return (start);
		}
	}
	return (-1);
}
