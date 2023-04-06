/**
 *_prime - check if the input integer is a prime number
 *
 *@n: integer number
 *@i: integer
 *
 *Return: 1 if `n` is a prime number or 0 if it's not
 */
int _prime(int n, int i)
{
	if (i * i <= n)
	{
		if (n % i == 0)
			return (0);

		_prime(n, i + 1);
	}
	return (1);
}
/**
 *is_prime_number - return if the input integer is a prime number
 *
 *@n: integer number
 *
 *Return: 1 if `n` is a prime number or 0 if it's not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	else if (n == 2 || n == 3)
		return (1);

	else if (n % 2 == 0 || n % 3 == 0)
		return (0);

	else
		return (_prime(n, 5));
}
