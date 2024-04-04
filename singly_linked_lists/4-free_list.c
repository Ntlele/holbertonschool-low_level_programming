#include "lists.h"
#include <stdlib.h>

/**
 * free_list - freees a node in a linked list
 * head: pointer to the to the first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next, *current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;

	}
}
