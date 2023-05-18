#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the size of a linked list
 *
 * @h: head of the linked list
 *
 * Return: the number of node in the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
