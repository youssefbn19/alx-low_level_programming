#include <stdio.h>
/**
 *main - Entry point
 *Description: Finding all possible different combinations of two digits,
 *and the two digits are different
 *Return: 1 always if success
 */
int main(void)
{
	int fd, ld;

	fd = 48;
	while (fd < 57)
	{
		ld = fd + 1;
		while (ld <= 57)
		{
			putchar(fd);
			putchar(ld);
			if (fd == 56 && ld == 57)
			{
				ld++;
				continue;
			}
			putchar(',');
			putchar(' ');
			ld++;
		}
		fd++;
	}
	putchar('\n');
	return (0);
}
