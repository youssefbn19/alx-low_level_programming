#include "main.h"
#include <stdio.h>
/**
 * print_recursion_binary - converts a decimal number to binary
 * and prints it in the right order
 *
 * @n: positive number
 *
 * Return: Nothing
 */
void print_recursion_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_recursion_binary(n >> 1);
		(n & 1) == 0 ? _putchar('0') : _putchar('1');
	}
}

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: positive number
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_recursion_binary(n);

}
