#include <stdio.h>
/**
 *main - Entry Point
 *Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *Return: 0 always if success
 */
int main(void)
{
	unsigned long int fib, num1, num2;
	int i;

	num1 = 0;
	num2 = 1;
	for (i = 1; i <= 98; i++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;

		if (i == 98)
		{
			printf("%ld", fib);
			continue;
		}
		printf("%ld, ", fib);
	}
	putchar('\n');
	return (0);
}
