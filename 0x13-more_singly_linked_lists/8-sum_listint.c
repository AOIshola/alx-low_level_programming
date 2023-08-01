#include "lists.h"

/**
 * sum_listint - sums all data (n) of a linked list
 * @head: pointer to the first node of linked list
 *
 * Return: sum of all data or 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currentPtr = head;

	if (head == NULL)
	{
		return (0);
	}
	while (currentPtr != NULL)
	{
		sum += currentPtr->n;
		currentPtr = currentPtr->next;
	}

	return (sum);
}
