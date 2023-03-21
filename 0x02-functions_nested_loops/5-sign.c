#include "main.h"
/**
 *print_sign - Check a number sign
 *@n: number
 *Return: 1 if the number is positive, -1 if negative or 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
