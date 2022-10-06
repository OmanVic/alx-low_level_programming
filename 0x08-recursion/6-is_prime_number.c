#include "main.h"
/**
 * is_prime_number - a function to check for natural prime number
 *
 * @n: integer to be checked
 *
 * Return: 1 if prime or 0 if not
 *
 **/
int is_prime_number(int n)
{
	static int i = 1;

	++i;
	if ((n < 2 || n % i == 0) && n != i)
	{
		return 0;
	}
	else if (n == i)
	{
		return 1;
	}
	else
	{
		return is_prime_number(n);
	}
}
