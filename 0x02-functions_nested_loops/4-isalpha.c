#include "main.h"
/**
 *_isalpha - check if letter is lowercase, uppercase or not.
 *@c: The character to check.
 *Return: 1 if character is lowercase or uppercase,
 *otherwise return 0.
 */
int _isalpha(int c)
{
	char al;

	al = 'a';
	while (al <= 'z')
	{
		if (al == c)
			return (1);
		al++;
	}
	al = 'A';
	while (al <= 'Z')
	{
		if (al == c)
			return (1);
		al++;
	}
	return (0);
}
