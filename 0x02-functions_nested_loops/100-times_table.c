#include <stdio.h>
#include "main.h"
/**
 *print_times_table - prints the times table starting with 0
 *@n: The number of times
 *Descritpion: prints the n times table, starting with 0.
 */
void print_times_table(int n)
{
	int num, tm, res;


	if (n < 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			for (tm = 0; tm <= n; tm++)
			{
				res = num * tm;
				if (tm == 0)
				{
					printf("%d", res);
				}
				else if (res < 10)
				{
					printf(",   %d", res);
				}
				else if (res < 100)
				{
					printf(",  %d", res);
				}
				else
				{
					printf(", %d", res);
				}
			}
			printf("\n");
		}
	}
}
