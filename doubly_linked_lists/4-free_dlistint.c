#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint_t - frees nodes in a doubly list
 * @head: pointer to a node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
