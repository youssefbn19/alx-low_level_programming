#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - the sum of all giving numbers
 *
 * @n: number of args
 *
 * Return: the sum of all numbers giving as arguments.
 * 0 if the number of args `n` is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list  nums;

	if (n == 0)
		return (0);

	va_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
