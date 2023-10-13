#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly
 * linked list
 * @h: points to the head of the list
 *
 * Return: the number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		num++;
		temp = temp->next;
	}

	return (num);
}
