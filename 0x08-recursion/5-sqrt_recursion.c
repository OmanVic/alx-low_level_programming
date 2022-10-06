int sqr(int n, int i);
/**
 * _sqrt_recursion - a function that check square root of a number
 *
 * @n: integer whose square root is checked
 *
 * Return: 0 or natural squareroot of n
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqr(n, 1));
	}
}
/**
 * sqr - a function to get the square root of a number
 *
 * @n: integer whose square root is checked
 *
 * @i: incremental integer
 *
 * Return: 0 or i
 *
 */
int sqr(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (i > n)
	{
		return (-1);
	}
	else
	{
		return ((sqr(n, ++i)));
	}
}
