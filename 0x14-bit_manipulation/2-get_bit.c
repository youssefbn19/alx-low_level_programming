#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: decimal number
 * @index: The index whose bit value we want to return
 *
 * Return: The value of a bit, -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int pos = 0;
	unsigned int max_index = sizeof(unsigned long int) * 8;

	if (index > max_index)
		return (-1);

	while (pos < index)
	{
		n >>= 1;
		pos++;
		if (n == 0)
			return (-1);

	}

	if ((n & 1) == 0)
		return (0);
	else
		return (1);

}
