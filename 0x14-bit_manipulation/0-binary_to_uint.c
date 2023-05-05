#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to decimal number
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: decimal number of a binary number, 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, j, len;

	if (b == NULL)
		return (dec);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (dec);
		i++;
	}

	i--;
	len = i;
	j = 1;
	while (len >= 0)
	{
		if (len != i)
			j *= 2;

		if (b[len] == '1')
			dec += j;

		len--;
	}

	return (dec);
}
