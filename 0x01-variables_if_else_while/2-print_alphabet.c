#include <stdio.h>
/**
 *main - Entry point
 *Description: keep printing alphabetic characters in lower case
 *in order using while loop and putchar which only print one character
 *and in the end of the statement add new line.
 *Return: 1 always if success
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
