#include "lists.h"

/**
 * listint_len - gets the length of a linked list
 * @h: the first node of the linked list
 *
 * Return: the number of elements in the linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *currentPtr = h;

	while (currentPtr != NULL)
	{
		currentPtr = currentPtr->next;
		count++;
	}

	return (count);
}
