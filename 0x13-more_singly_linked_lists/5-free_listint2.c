#include "lists.h"
/**
 * free_listint2 - fuction to free a list
 *
 * @head: pointer to a variable
 *
 * Return: void
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while(ptr->next != NULL)
	{
		*head = ptr->next;
		free(ptr);
		ptr = *head;
	}
	free(ptr);
	*head = NULL;
}
