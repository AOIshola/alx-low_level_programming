#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end of a linked list
 * @head: the first node of the list
 * @n: the number element to be added to list
 *
 * Return: address of newly added node or NULL if function fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *currentPtr;
	listint_t *newNode = malloc(sizeof(*newNode));

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		currentPtr = *head;
		while (currentPtr->next != NULL)
		{
			currentPtr = currentPtr->next;
		}
		currentPtr->next = newNode;
	}
	newNode->n = n;
	newNode->next = NULL;

	return (newNode);
}
