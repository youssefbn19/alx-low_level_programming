#include <stdio.h>
/**
 *main - Entry point
 *Description: looping throw the base 10 numbers
 *using while loop statement
 *Return: 1 always if success
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
