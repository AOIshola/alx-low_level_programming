#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of a list
 * @head: first node of the list
 * @str: string to be stored in node
 *
 * Return: address of newly added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int str_len = 0;
	list_t *newNode = malloc(sizeof(*newNode));
	list_t *currentPtr;

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
			currentPtr =  currentPtr->next;
		}
		currentPtr->next = newNode;
	}
	newNode->str = strdup(str);
	while (*str != '\0')
	{
		str_len++;
		str++;
	}
	newNode->len = str_len;
	newNode->next = NULL;

	return (newNode);
}
