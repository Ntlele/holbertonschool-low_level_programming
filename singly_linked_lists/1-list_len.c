#include "list.h"

/**
 * list_len - returns the number of elements in linked list
 * @h: pointer to the node 
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
