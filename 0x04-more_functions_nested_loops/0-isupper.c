#include "main.h"
/**
 * _isupper - check letter if uppercase or not
 *@c: integer number
 *Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);

}
