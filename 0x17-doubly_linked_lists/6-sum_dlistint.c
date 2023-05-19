#include "lists.h"
/**
 * sum_dlistint - add the sum of all elements in a double linked list
 *
 * @head: pointer to the link list
 *
 * Return: sum of the values in the linked list
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
