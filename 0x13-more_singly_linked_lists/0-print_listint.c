#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - printing the data of a node
 * @h: head node
 * Return: the length of the node
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	int len = 0;

	temp = h;
	if (temp == NULL)
		return ((size_t)(NULL));

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		len++;
	}

	return (len);
}
