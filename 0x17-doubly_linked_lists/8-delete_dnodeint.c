#include "lists.h"
#include <stddef.h>
/**
 * delete_dnodeint_at_index - deletes the node of an index
 *
 * @head: pointer to the linked list
 *
 * @index: index to be deleated
 *
 * Return: an integer
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *temp, *temp2;
	unsigned int i = 0;

	ptr = *head;
	temp = *head;
	if (ptr == NULL)
		return (-1);
	if (index == 0 && ptr)
	{
		ptr = ptr->next;
		ptr->prev = NULL;
		*head = ptr;
		free(temp);
		return (1);
	}


	while (i < index && ptr) 
	{
		ptr = ptr->next;
		temp = temp->next;
		i++;
	}
	if (ptr == NULL)
		return (-1);
	if (ptr->next == NULL && index == 0)
	{
		free(ptr);
		return (1);
	}

	temp = temp->next;
	temp2 = ptr->prev;
	temp2->next = temp;
	temp->prev = temp2;
	free(ptr);
	return (1);
}
