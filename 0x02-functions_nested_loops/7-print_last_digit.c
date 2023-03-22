#include "main.h"
#include <stdio.h>
/**
 *print_last_digit - return num last number
 *@num: The number to check its last digit
 *
 *Return: num last digit always
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
