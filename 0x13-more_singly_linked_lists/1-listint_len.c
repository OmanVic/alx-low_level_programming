#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * listint_len - function to count element in a linked list
 *
 * @h: pointer to a variable
 *
 * Return: an integer
 *
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
