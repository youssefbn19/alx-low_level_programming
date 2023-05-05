#include "main.h"
#include <stdio.h>
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 10;
	char *indian = (char *)&i;

	if (*indian)
		return (1);
	else
		return (0);
}
