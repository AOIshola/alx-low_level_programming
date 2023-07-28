#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a node to the beginning of a list
 * @head: first node of the list
 * @str: string to be added to the list
 *
 * Return: address of the newly added node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *string;
	unsigned int str_len = 0;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	string = strdup(str);
	if (string == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	*head = newNode;
	newNode->str = strdup(str);
	while (*string != '\0')
	{
		str_len++;
		string++;
	}
	newNode->len = str_len;

	return (newNode);
}
