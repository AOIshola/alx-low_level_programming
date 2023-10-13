#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a dlistint_t linked
 * list
 * @head: points to the first node in list
 * @index: position of the node to delete
 *
 * Return: 1 on success, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prevPtr = NULL, *currentPtr = *head, *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	while (i++ < index && currentPtr->next != NULL)
	{
		prevPtr = currentPtr;
		currentPtr = currentPtr->next;
	}
	if (index > i)
		return (-1);
	if (prevPtr == NULL && currentPtr->next != NULL)
	{
		*head = currentPtr->next;
		(*head)->prev = NULL;
		free(currentPtr);
		return (1);
	}
	else if (prevPtr == NULL && currentPtr->next == NULL)
	{
		*head = NULL;
		return (1);
	}
	if (prevPtr != NULL && currentPtr->next != NULL)
	{
		temp = currentPtr;
		currentPtr = currentPtr->next;
		prevPtr->next = currentPtr;
		currentPtr->prev = prevPtr;
		free(temp);
		return (1);
	}
	if (prevPtr != NULL && currentPtr->next == NULL)
	{
		prevPtr->next = NULL;
		free(currentPtr);
		return (1);
	}
	return (-1);
}
