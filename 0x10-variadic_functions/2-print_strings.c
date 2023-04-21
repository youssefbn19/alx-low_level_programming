#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings separate with a giving separator
 *
 * @separator: string to separate string
 * @n: number of strings should be passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p_strs;
	char *str;

	va_start(p_strs, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(p_strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(p_strs);

	printf("\n");
}
