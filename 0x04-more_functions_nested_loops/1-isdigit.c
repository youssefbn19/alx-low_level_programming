#include "main.h"
/**
 *_isdigit - check character is a digits or not
 *@c: integer number
 *Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
