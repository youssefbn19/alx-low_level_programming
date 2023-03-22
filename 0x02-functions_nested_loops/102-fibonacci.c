#include <stdio.h>
/**
 *main - Entry Point
 *Description: prints the first 50 Fibonacci numbers, starting with 1 and 2;
 *Return: 0 always if success
 */
int main(void)
{
	int fib, i;

	for (i = 1; i <= 50; i++)
	{
		if (i < 3)
		{
			printf("%d, ", i);
			continue;
		}
		fib = (i - 1) + (i - 2);
		if (i == 50)
		{
			printf("%d", fib);
			continue;
		}
		printf("%d, ", fib);
	}
	putchar('\n');
	return (0);
}
