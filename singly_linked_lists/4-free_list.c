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
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(head);
	}
}
