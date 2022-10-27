#include "lists.h"
/**
 * sum_listint - function to sum elements in a linked list
 *
 * @head: pointer to a variable;
 *
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;

	int k = 0;

	while (ptr->next != NULL)
	{
		k = k + (ptr->n);
		ptr = ptr->next;
	}
	k = k + (ptr->n);
	return (k);
}
