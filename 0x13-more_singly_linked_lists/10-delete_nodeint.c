#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given
 * position
 * @head: pointer to the first node of the list
 * @index: index position to delete node at
 *
 * Return: 1 if successful, otherwise -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentPtr, *prevPtr, *temp;
	unsigned int i = 0;

	if (*head != NULL)
	{
		prevPtr = NULL;
		currentPtr = *head;

		while (currentPtr->next != NULL && i != index)
		{
			prevPtr = currentPtr;
			currentPtr = currentPtr->next;
			i++;
		}
		if (currentPtr->next == NULL && index > i)
			return (-1);
		else if (!prevPtr)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		else
		{
			temp = currentPtr;
			prevPtr->next = currentPtr->next;
			free(temp);
			return (1);
		}
	}
	else
	{
		return (-1);
	}
}
