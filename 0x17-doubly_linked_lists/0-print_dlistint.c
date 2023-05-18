#include "lists.h"

/**
 * print_dlistint - Prints values in a list
 *
 * @h: head pointer to the list
 *
 * Return: number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
