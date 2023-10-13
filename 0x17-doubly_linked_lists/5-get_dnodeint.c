#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a linked list
 * @head: points to the first node
 * @index: position of node to get
 *
 * Return: the address of the nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tempPtr = head;
	unsigned int idx = 0;

	if (tempPtr == NULL)
		return (NULL);

	while (tempPtr != NULL)
	{
		if (idx == index)
			return (tempPtr);
		tempPtr = tempPtr->next;
		idx++;
	}

	return (NULL);
}
