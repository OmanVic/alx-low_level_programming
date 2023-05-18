#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node for the list
 *
 * @head: pointer to a linkedlist
 *
 * @index: the index of the node to be returned
 *
 * Return: a linked list or NULL
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	head = temp;
	return (head);
}
