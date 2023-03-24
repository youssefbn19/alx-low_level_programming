#include <stdio.h>
/**
 *
 *
 *
 *
 */
int main(void)
{
	long long int pf_sum, num, i, new_num, lpf;

	num = new_num = 612852475143;
	pf_sum = 1;
	i = 2;
	while (pf_sum != num)
	{
		if ((new_num % i) == 0)
		{
			pf_sum *= i;
			lpf = i;
			new_num /= i;
		}
		else
		{
			i++;
		}
	}
	printf("%lld\n", lpf);
	return (0);
}
