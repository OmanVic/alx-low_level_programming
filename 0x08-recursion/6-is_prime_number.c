int prime(int n, int i);
/**
 * is_prime_number - a function to check for prime numbers
 *
 * @n: input variable
 *
 * Return: 1 (if n is a prime number) or 0 (if n is not)
 *
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}
/**
 * prime - a function to text for prime numbers
 *
 * @n: integer to check
 *
 * @i: incremental factor
 *
 * Return: 1 or 0
 *
 */
int prime(int n, int i)
{
	if ((n % i == 0) && (i != 0 || i != 1) && (n != i))
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	else
	{
		return (prime(n, ++i));
	}
}
