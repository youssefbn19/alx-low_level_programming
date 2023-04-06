/**
 *_natural_sqrt - find the sqrt of a natural number
 *
 *@num: integer
 *@i: integer
 *
 *Return: -1 If n does not have a natural square root
 *or i the natural square root of `num`
 */
int _natural_sqrt(int num, int i)
{
	if (i * i == num)
		return (i);

	else if (i * i > num)
		return (-1);

	return (_natural_sqrt(num, i + 1));
}
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *
 *@n: integer number
 *
 *Return: -1 if `n` is negative or returns the natural square root of `n`
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (n);

	else
		return (_natural_sqrt(n, 2));
}
