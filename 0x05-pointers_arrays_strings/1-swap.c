#include "main.h"
/**
 *swap_int -  swaps two numbers
 *@a: First integer pointer
 *@b: Second integer pointer
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
