#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of the node values
 * @head: pointer to the nodes
 *
 * Return: sum of the nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
