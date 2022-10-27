#include "lists.h"
/**
 * insert_nodeint_at_index - a function to insert node at index
 *
 * @head: pointer to a variable
 *
 * @idx: index to be added
 *
 * @n: variable to be added:
 *
 * Return: head
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr1, *ptr2, *ptr;

	unsigned int i = 0;

	ptr1 = malloc(sizeof(listint_t));
	ptr2 = ptr = *head;
	for (i = 0; i < idx; i++)
	{
		ptr2 = ptr2->next;
	}
	for (i = 0; i < (idx - 1); i++)
	{
		ptr = ptr->next;
	}
	ptr->next = ptr1;
	ptr1->n = n;
	ptr1->next = ptr2;
	return (*head);
}

