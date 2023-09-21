#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - length of the node list
 * @h: pointer to head
 * Return: the length of node
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}

