#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size: integer number
 *Description: print a triangle using # character and its size
 *depends on the argument number (size)
 */
void print_triangle(int size)
{
	int i, j, z, f;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		j = 1;
		for (i = 1; i <= size; i++)
		{
			for (z = 1; z <= (size - j); z++)
			{
				_putchar(' ');
			}
			for (f = 1; f <= j; f++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
}
