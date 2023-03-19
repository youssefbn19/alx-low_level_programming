#include <stdio.h>
/**
 *main - Entry point
 *Description: Finding all possible different combinations of two digits,
 *and the two digits are different
 *Return: 1 always if success
 */
int main(void)
{
	int fd, sd, td, ld;

	fd = 48;
	ld = 49;
	while (fd <= 57)
	{
		sd = 48;
		while (sd < 57)
		{
			td = 48;
			while (td <= 57)
			{
				while (ld <= 57)
				{
					if (sd == ld && fd == td)
					{
						ld++;
						continue;
					}
					putchar(fd);
					putchar(sd);
					putchar(' ');
					putchar(td);
					putchar(ld);
					putchar(',');
					putchar(' ');
					ld++;
				}
				ld = 48;
				td++;
			}
			sd++;
		}
		fd++;
	}
	putchar('\n');
	return (0);
}
