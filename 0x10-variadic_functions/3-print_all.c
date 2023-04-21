#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all -  prints anything giving as an arguments
 *
 * @format: types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list p_all;
	int i;
	char *str;

	va_start(p_all, format);

	i = 0;
	while (format && *(format + i) != '\0')
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(p_all, int));
				break;
			case 'i':
				printf("%d", va_arg(p_all, int));
				break;
			case 'f':
				printf("%f", va_arg(p_all, double));
				break;
			case 's':
				str = va_arg(p_all, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				i++;
				continue;
		}

		i++;
		if (*(format + i) != '\0')
			printf(", ");
	}

	va_end(p_all);

	printf("\n");
}
