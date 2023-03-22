#include <stdio.h>
/**
 *main - Entry point 
 *Description: print sum of all multiples of 3 and 5 below 1024
 *
 *Return: 0 always is success
 */
int main(void)
{
	int sum, i, m_three, m_five;
	
	sum = 0;
	for (i = 0; i <= 1024; i++)
	{
		m_three = (i % 3);
		m_five = (i % 5);
		if( m_three == 0 || m_five == 0)
		{
			sum += i;
		}
		
	}
	printf("The sum of all the multiples of 3 or 5 below 1024 is %d\n", sum);
	return (0);
}
