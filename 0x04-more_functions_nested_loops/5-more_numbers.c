#include "main.h"
/**
 *more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, num;

	num = 0;
	for (i = 0; i < 10; i++)
	{
		while (num <= 14)
		{
			if (num > 9)
				_putchar('1');

			_putchar((num % 10) + '0');
			num++;
		}
		num = 0;
		_putchar('\n');
	}
}
