#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - adds a node to the list
 *
 * @idx: the index position
 * @h: pointer to pointer
 * @n: int value of the node
 *
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) 
{
	if (h == NULL)
		return NULL;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;
	
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return new_node;
	}
	dlistint_t *current = *h;
	for (unsigned int i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL)
	{
		free(new_node);
		return NULL;
	}
	new_node->next = current->next;
	new_node->prev = current;
	
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;

    return new_node;
}
