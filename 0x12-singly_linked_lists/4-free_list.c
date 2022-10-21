#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - a function to free a link list
 *
 * @head: pointerto a structure
 *
 * return: void
 *
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		free(head->str);
		temp= head->next;
		free(head);
		head = temp;
	}
}
