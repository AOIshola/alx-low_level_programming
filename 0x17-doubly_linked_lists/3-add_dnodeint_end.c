#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of a linked
 * list
 * @head: points to the first node of the list
 * @n: integer
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tempPtr = *head, *newPtr = NULL;

	newPtr = malloc(sizeof(dlistint_t));

	if (newPtr == NULL)
		return (NULL);
	newPtr->n = n;

	if (tempPtr == NULL)
	{
		newPtr->next = NULL;
		newPtr->prev = NULL;
		*head = newPtr;

		return (newPtr);
	}
	while (tempPtr->next != NULL)
	{
		tempPtr = tempPtr->next;
	}
	tempPtr->next = newPtr;
	newPtr->prev = tempPtr;
	newPtr->next = NULL;

	return (newPtr);
}
