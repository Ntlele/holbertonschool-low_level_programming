#include "lists.h"
#include <stdlib.h>

/**
 * free_list - freees a node in a linked list
 * @head: pointer to the to the first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *free_up;

	while ((free_up = head) != NULL)
	{
		head = head->next;
		free(free_up->str);
		free(free_up);
	}
}
