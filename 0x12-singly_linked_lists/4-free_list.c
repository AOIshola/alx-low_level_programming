#include "lists.h"

/**
 * free_list - free all memory allocated for a linked list
 * @head: first node of the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
