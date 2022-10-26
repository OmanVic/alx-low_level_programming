#include "lists.h"
/**
 * free_listint - function to delete element in an array
 *
 * @head: pointer to a variable
 *
 * Return: void
 *
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr->next != NULL)
	{
		head = ptr->next;
		free(ptr);
		ptr = head;
	}
	free(ptr);
}
