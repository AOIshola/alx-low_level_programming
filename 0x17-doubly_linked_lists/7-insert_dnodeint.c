#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node in a linked list
 * @h: points to the first node
 * @idx: the index to insert the node
 * @n: integer in the new node
 *
 * Return: address of the new node on success,
 * NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newPtr = NULL, *currentPtr = *h;
	unsigned int i = 1;

	newPtr = malloc(sizeof(dlistint_t));
	if (newPtr == NULL)
		return (NULL);
	newPtr->n = n;
	if (*h == NULL)
	{
		*h = newPtr;
		newPtr->next = NULL;
		newPtr->prev = NULL;
		return (newPtr);
	}
	if (idx == 0)
		add_dnodeint(h, n);
	while (currentPtr != NULL)
	{
		if (i == idx)
		{
			if (currentPtr->next == NULL)
				return (add_dnodeint_end(h, n));
			newPtr->next = currentPtr->next;
			newPtr->prev = currentPtr;
			currentPtr->next->prev = newPtr;
			currentPtr->next = newPtr;
			return (newPtr);
		}
		currentPtr = currentPtr->next;
		i++;
	}
	return (NULL);
}
