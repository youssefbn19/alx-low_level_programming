#include <stdio.h>
/**
 *main - Entry point
 *Description: keep printing alphabetic characters in lower case
 *in reverse order and in the end of the statement add new line.
 *Return: 1 always if success
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
