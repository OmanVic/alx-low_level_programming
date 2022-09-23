#include "main.h"
/**
 * reverse_array - a function to reverse content of an array
 *
 * @a: an array if integer
 *
 * @n: the number of element in the array
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i, m;

	for (i = 0; i < n / 2; i++)
	{
		m = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = m;
	}
}
