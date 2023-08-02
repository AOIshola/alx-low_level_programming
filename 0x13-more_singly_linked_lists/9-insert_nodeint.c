#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position
 * @head: pointer to the first node of the linked list
 * @idx: index of the list where the new node should be
 * added
 * @n: integer data occupying new node
 *
 * Return: address to the newly created node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentPtr, *prevPtr;
	listint_t *newNode = malloc(sizeof(*newNode));
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		prevPtr = NULL;
		currentPtr = *head;

		while (currentPtr->next != NULL && i != idx)
		{
			prevPtr = currentPtr;
			currentPtr = currentPtr->next;
		}
		if (currentPtr->next == NULL && i < idx)
		{
			free(newNode);
			return (NULL);
		}
		else if (prevPtr == NULL)
		{
			newNode->next = *head;
			*head = newNode;
		}
		else
		{
			prevPtr->next = newNode;
			newNode->next = currentPtr;
		}
	}
	else
		return (NULL);
	return (newNode);
}
