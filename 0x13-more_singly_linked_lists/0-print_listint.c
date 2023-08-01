#include "lists.h"

/**
 * print_listint - print a linked list
 * @h: the first node of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *currentPtr = h;

	while (currentPtr != NULL)
	{
		count++;
		printf("%d\n", currentPtr->n);
		currentPtr = currentPtr->next;
	}

	return (count);
}
