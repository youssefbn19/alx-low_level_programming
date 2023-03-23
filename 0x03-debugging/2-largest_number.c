#include "main.h"
#include <stdio.h>
/**
  * largest_number - prints the largest of 3 numbers
  * @a: first integer
  * @b: second integer
  * @c: third integer
  */
void largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	printf("%d is the largest number\n", largest);
}
