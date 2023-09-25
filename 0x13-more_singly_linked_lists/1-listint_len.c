#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - number of node
 * @h: head of node
 * Return: numner of node present
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int len = 0;

	temp = h;

	if (temp == NULL)
		return ((size_t)(NULL));

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}

