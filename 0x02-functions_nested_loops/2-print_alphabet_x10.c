#include "main.h"
/**
 *print_alphabet_x10 - Print the alphabet 10 times
 *
 *
 *
 */
void print_alphabet_x10(void)
{
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
