#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at index from list
 * @head: pointer to pointer
 * @index: position of node
 *
 * Return: return 1 on success or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}
	if (current == *head)
	{
		*head = current->next;
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
