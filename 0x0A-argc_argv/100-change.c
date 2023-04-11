#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 *to make change for an amount of money.
 *
 * @argc: The number of command line arguments
 * @argv: array of  the program command line arguments
 *
 * Return: 0 always if successed, 1 if the number is not exists
 */
int main(int argc, char *argv[])
{
	int i, num_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int cents;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (cents >= coins[i])
			{
				cents -= coins[i];
				num_coins++;
			}
			if (cents == 0)
				break;
		}
		printf("%d\n", num_coins);
	}

	return (0);
}
