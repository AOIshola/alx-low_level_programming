#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @head: points to the first node
 * @idx: index to inset node
 * @n: integer in node
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
		int n)
{
	dlistint_t *prevPtr = NULL, *currentPtr = NULL, *newPtr = NULL;
	unsigned int i = 0;

	newPtr = malloc(sizeof(dlistint_t));
	if (newPtr == NULL)
		return (NULL);
	newPtr->n = n;
	if (*head == NULL)
	{
		*head = newPtr;
		newPtr->next = NULL;
		newPtr->prev = NULL;
		return (newPtr);
	}
	currentPtr = *head;
	while (i++ < idx && currentPtr != NULL)
	{
		prevPtr = currentPtr;
		currentPtr = currentPtr->next;
	}
	if (prevPtr == NULL)
		add_dnodeint(head, n);
	else if (currentPtr != NULL)
	{
		newPtr->next = currentPtr;
		newPtr->prev = prevPtr;
		prevPtr->next = newPtr;
		currentPtr->prev = newPtr;
	}
	if (currentPtr == NULL)
	{
		free(newPtr);
		return (NULL);
	}
	else
		return (newPtr);
}
