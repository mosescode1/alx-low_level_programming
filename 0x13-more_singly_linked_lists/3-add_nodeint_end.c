#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adding a node to the end
 * @head: pointer to the first node
 * @n: data value of the node
 * Return: address of the head pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *endnode;

	endnode = malloc(sizeof(listint_t *));

	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
		*head = endnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = endnode;
	}
	return (*head);
}


