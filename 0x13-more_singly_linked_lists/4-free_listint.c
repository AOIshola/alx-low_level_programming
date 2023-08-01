#include "lists.h"

/**
 * free_listint - free all nodes in a linked list
 * @head: pointer to the first node of the list
 *
 * Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
