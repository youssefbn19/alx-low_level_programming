#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: positive int pointer
 * @index: the index that we want to set its value to 1
 *
 * Return: 1 if it success, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pos;
	unsigned int max_index =  sizeof(unsigned long int) * 8;

	if (index >= max_index)
		return (-1);

	pos = 1 << index;
	*n |= pos;
	return (1);


}
