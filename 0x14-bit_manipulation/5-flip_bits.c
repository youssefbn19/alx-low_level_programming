#include "main.h"
#include <stdio.h>
/**
 * flip_bits - the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: first positive number
 * @m: second positive number
 *
 * Return:  the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while (m != 0 || n != 0)
	{
		if ((m & 1) != (n & 1))
			bits++;
		m >>= 1;
		n >>= 1;
	}
	return (bits);


}
