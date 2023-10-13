#include "lists.h"

/**
 * dlistint_len - gets the number of elements in a list
 * @h: points to the first node
 *
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num = 0;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		num++;
	}

	return (num);
}
