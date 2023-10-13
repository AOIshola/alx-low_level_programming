#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: points to the first node
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
