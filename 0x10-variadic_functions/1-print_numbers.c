#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers separate with a giving separator
 *
 * @separator: string to separate numbers
 * @n: number of integers should be passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p_nums;

	va_start(p_nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p_nums, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(p_nums);

	printf("\n");
}
