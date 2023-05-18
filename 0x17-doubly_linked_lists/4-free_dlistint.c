#include "lists.h"
/**
 * free_dlistint - frees the entire nodes of a linked list
 *
 * @head: pointer to the linked list
 *
 * Return: void
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr, *temp;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr->prev)
		ptr = ptr->prev;
	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
}
