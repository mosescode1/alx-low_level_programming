#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - index in a linked list.
 * @head: A pointer to the head of node.
 * @index: The index of node.
 * Return: return  NULL if node doesnt exist
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int i = 0, n = index;

	if (head == NULL)
		return (NULL);

	temp = head;

	while (temp != NULL)
	{
		if (i == n)
			return (temp);

		temp = temp->next;
		i++;
	}
	return (NULL);
}
