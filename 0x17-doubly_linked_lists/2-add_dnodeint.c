#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of
 * a linked list
 * @head: points to the first node in list
 * @n: integer to insert in node
 *
 * Return: address of the newly added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newPtr = malloc(sizeof(dlistint_t));

	if (newPtr == NULL)
		return (NULL);
	newPtr->n = n;
	newPtr->prev = NULL;
	newPtr->next = NULL;

	if (*head == NULL)
	{
		*head = newPtr;
		return (newPtr);
	}
	(*head)->prev = newPtr;
	newPtr->next = *head;
	newPtr->prev = NULL;
	*head = newPtr;

	return (newPtr);
}
