#include "lists.h"
#include <stdio.h>
/**
 * list_len - count the number of element in a link list
 *
 * @h: a pointer to a viariable
 *
 * Return: an integer
 *
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
