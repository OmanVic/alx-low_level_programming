#include "main.h"
/**
 * swap_int - a fuction that swap two integers
 *
 * Return: void
 *
 * @a: parameter to be swap
 *
 * @b: parameter to be swap
 *
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
