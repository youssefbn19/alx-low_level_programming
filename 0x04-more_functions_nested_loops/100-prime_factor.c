#include <stdio.h>
/**
 * main - print the largest prime factor of the number 612852475143
 * Return: 0 always if success
 */
int main(void)
{
	long int pf_sum, num, i, new_num, lpf;

	num = new_num = 612852475143;
	pf_sum = 1;
	i = 2;
	while (pf_sum != num)
	{
		if ((new_num % i) != 0)
		{
			i++;
			continue;
		}

		pf_sum *= i;
		lpf = i;
		new_num /= i;
	}
	printf("%ld\n", lpf);
	return (0);
}
