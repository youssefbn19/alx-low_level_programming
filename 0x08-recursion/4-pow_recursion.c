/**
 *_pow_recursion - The exponent of a number
 *
 *@x: base number
 *@y: power number
 *
 *Return: -1 if the power is negative, and
 *the value of `x` raised to the power of `y`.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	y--;
	return (x * _pow_recursion(x, y));
}
