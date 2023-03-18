#include <stdio.h>
/**
 *main - Entry point
 *Description: keep printing alphabetic characters in lowercase
 *then in uppercase in order using while loop and putchar which
 *only print one character and in the end add new line.
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
	alph = 'A';
	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
