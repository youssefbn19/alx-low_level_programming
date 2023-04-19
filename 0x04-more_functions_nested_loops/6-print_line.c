#include "main.h"
/**
 *print_line - print straight line(s)
 *@n: integer number
 *Description: print a number of straight depends on
 *the argument number (n)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

