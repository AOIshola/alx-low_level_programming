#include "lists.h"

/**
 * sum_dlistint - sum all data (n) of a dlistint_t linked
 * list
 * @head: points to the fist node
 *
 * Return: sum of all integer values in list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tempPtr = head;
	int sum = 0;

	if (tempPtr == NULL)
		return (0);

	while (tempPtr != NULL)
	{
		sum += tempPtr->n;
		tempPtr = tempPtr->next;
	}

	return (sum);
}
