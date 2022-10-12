#include "function_pointers.h"
/**
 * array_iterator - a function to print array element
 *
 * @array: array to consider
 *
 * @size: size of the array
 *
 * @action: a pointer to a function
 *
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(*(array + i));
	}
}
