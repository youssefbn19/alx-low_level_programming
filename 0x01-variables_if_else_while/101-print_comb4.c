#include <stdio.h>
/**
 *main - Entry point
 *Description: Finding all possible different combinations of two digits,
 *and the two digits are different
 *Return: 1 always if success
 */
int main(void)
{
	int fd, sd, td;

	fd = 48;
	while (fd <= 55)
	{
		sd = fd + 1;
		while (sd <= 56)
		{
			td = sd + 1;
			while (td <= 57)
			{
				putchar(fd);
				putchar(sd);
				putchar(td);
				if (fd == 55 && sd == 56 && td == 57)
				{
					td++;
					continue;
				}
				putchar(',');
				putchar(' ');
				td++;
			}
			sd++;
		}
		fd++;
	}
	putchar('\n');
	return (0);
}
