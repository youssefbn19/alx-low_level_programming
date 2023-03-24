#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: prints the numbers from 1 to 100 but if a number
 *is multiples of three then print "Fizz" instead of the number
 *and if a number is multiples of five then print "Buzz" instead
 * of the number but if a number is multiples of five and three
 *then print "FizzBuzz".
 *
 *Return: 0 always if success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
		{
			putchar(' ');
		}
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}

	putchar('\n');
	return (0);
}
