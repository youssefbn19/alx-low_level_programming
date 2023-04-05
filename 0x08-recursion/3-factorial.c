/**
 *factorial - the factorial of a given number.
 *
 *@n: integer number
 *
 *Return: -1 if `n` is negative
 *and the factorial of a `n` if `n` is 0 or positive..
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
