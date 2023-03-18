#include <stdio.h>
/**
 *main - Entry point
 *Description: looping throw the base 10 numbers
 *using while loop statement
 *Return: 1 always if success
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
