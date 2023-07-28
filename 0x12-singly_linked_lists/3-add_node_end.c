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
	char *string;
	unsigned int str_len = 0;
	list_t *newNode = malloc(sizeof(*newNode));
	list_t *currentPtr;

	if (newNode == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNOde;
	}
	else
	{
		currentPtr = *head;
		while (currentPtr->next != NULL)
		{
			currentPtr =  currentPtr->next;
		}
		currentPtr->next = newNode
	}
	string = strdup(str);
	if (string == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (*string != '\0')
	{
		str_len++;
		string++;
	}
	newNode->str = strdup(str);
	newNode->len = str_len;
	newNode->next = NULL;

	return (newNode);
}
