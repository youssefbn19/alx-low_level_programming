#include <stdio.h>
/**
 *main - Entry Point
 *Description: loop around and printing all the numbers of base 16 using
 *putchar function.
 *Return: 1 Always if success
 */
int main(void)
{
	int dec;

	dec = 48;
	while (dec <= 57)
	{
		putchar(dec);
		dec++;
	}
	dec = 97;
	while (dec <= 102)
	{
		putchar(dec);
		dec++;
	}
	putchar('\n');
	return (0);
}
