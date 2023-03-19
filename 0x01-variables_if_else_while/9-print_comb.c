#include <stdio.h>
/**
 *main - Entry point
 *Decription: using while loop to print all the possibale
 *combinations of single-digit number.
 *Return: 1 Always if success
 */
int main(void)
{
	int sd = 48;

	while (sd <= 57)
	{
		putchar(sd);
		if(sd != 57)
		{
			putchar(',');
			putchar(' ');
		}
		sd++;
	}
	putchar('\n');
	return (0);
}
