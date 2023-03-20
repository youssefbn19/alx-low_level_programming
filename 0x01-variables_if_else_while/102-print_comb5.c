#include <stdio.h>
/**
 *main - Entry point
 *Description: Finding all possible different combinations of two digits,
 *and the two digits are different
 *Return: 1 always if success
 */
int main(void)
{
	int fd, sd;

	fd = 0;
	while (fd < 99)
	{
		sd = fd + 1;
		while (sd <= 99)
		{
			putchar((fd / 10) + 48);
			putchar((fd % 10) + 48);
			putchar(' ');
			putchar((sd / 10) + 48);
			putchar((sd % 10) + 48);
			if (fd == 98 && sd == 99)
			{
				sd++;
				continue;
			}

			putchar(',');
			putchar(' ');
			sd++;
		}
		fd++;
	}
	putchar('\n');
	return (0);
}
