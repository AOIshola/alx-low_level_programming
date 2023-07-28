#include <stdio.h>
#include "lists.h"

/**
 * list_len - evaluate the length of a linked list
 * @h: pointer to the first node of list
 *
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
