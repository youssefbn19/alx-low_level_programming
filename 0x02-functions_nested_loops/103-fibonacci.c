#include <stdio.h>
/**
 *main - Entry Point
 *Description: prints the sum of the even-valued terms
 *Return: 0 always if success
 */
int main(void)
{
	long int fib, num1, num2, sum;
	int i;

	num1 = sum = 0;
	num2 = 1;
	for (i = 1; i <= 50; i++)
	{
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
		if ((fib % 10) == 0)
			sum += fib;
	}
	printf("%ld\n", sum);
	return (0);
}
