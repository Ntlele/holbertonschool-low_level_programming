#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - counts the number of nodes
 * @h: pointer to the node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h !=NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
