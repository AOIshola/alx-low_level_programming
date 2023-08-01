#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of a linked list
 * @head: pointer to the first node of the list
 * @index: index position to get data from within list
 *
 * Return: address of the newly added node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count = 1;
	unsigned int pos;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp->next != NULL)
	{
		count++;
		temp = temp->next;
	}
	temp = head;
	if (index == 0)
	{
		return (head);
	}
	else if (index >= count)
	{
		return (NULL);
	}
	for (pos = 0; pos != index; pos++)
	{
		temp = temp->next;
	}

	return (temp);
}
