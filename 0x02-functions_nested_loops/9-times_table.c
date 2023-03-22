#include "main.h"
/**
 *times_table - prints the 9 times table starting with 0
 *
 */
void times_table(void)
{
	int num, tm, res;


	for (num = 0; num <= 9 ; num++)
	{
		for (tm = 0; tm <= 9; tm++)
		{
			res = num * tm;
			if (tm != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (res <= 9)
					_putchar(' ');
			}

			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}
