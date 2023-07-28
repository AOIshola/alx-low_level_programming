#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints members of a linked list
 * @h: pointer to the beginning of the list
 *
 * Return: number of members in list
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		if (temp->str != NULL)
		{
			printf("[%u] %s\n", temp->len, temp->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		temp = temp->next;
	}

	return (count);
}
