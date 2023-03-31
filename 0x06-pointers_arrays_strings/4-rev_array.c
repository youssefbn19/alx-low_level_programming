/**
 *reverse_array - reverse an array
 *
 *@a: an array of integer
 *@n: the number of elements of the array
 *
 *
 */

void reverse_array(int *a, int n)
{
	int swp, i, ln;

	ln = n - 1;
	for (i = 0; i <= ln; i++)
	{
		swp = a[i];
		a[i] = a[ln];
		a[ln] = swp;
		ln--;
	}
}
