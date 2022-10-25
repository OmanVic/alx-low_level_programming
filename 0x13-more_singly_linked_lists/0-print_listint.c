#include "lists.h"
/**
 * print_listint - a function to print values in linked list
 *
 * @h: pointer to a variable
 *
 * Return: integer
 *
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	i++;
	return (i);
}
