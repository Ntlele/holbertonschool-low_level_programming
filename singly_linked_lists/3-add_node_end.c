#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node to the end of list
 * @head: pointer to a pointer
 * @str: pointer to a string
 *
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[new_node->len] != '\0')
	{
		new_node->len++;
	}
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (new_node);
}
