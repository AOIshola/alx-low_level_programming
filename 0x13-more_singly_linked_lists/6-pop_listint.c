#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list
 * @head: the pointer to the first node of the list
 *
 * Return: the head node's data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		n = temp->n;
		*head = (*head)->next;
		free(temp);
	}

	return (n);
}
