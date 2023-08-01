#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning of a list
 * @head: the first node of the linked list
 * @n: integer value of the newly added node
 *
 * Return: address of the newly added node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->next = *head;
	newNode->n = n;
	*head = newNode;

	return (newNode);
}
