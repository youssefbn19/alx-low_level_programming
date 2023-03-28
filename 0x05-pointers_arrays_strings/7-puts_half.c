#include "main.h"
/**
 *puts_half - print the second half of a string
 *@str: character pointer
 */
void puts_half(char *str)
{
	int i, len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	n = (len - 1) / 2;
	if ((n % 2) != 0)
		n--;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
