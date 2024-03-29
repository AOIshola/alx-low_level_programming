#include "lists.h"

/**
 * free_listint2 - free all nodes in a linked list and
 * sets head to NULL
 * @head: pointer to the first node of the list
 *
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
