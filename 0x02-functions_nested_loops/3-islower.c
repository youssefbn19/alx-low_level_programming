#include "main.h"
/**
 *_islower - check if character is lowercase or not.
 *@c: The character to check.
 *Return: 1 if character is lowercase or 0 otherwise.
 */
int _islower(int c)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		if (al == c)
			return (1);
		al++;
	}
	return (0);
}
