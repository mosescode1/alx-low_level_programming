#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - adding a new node at the begining
 * @head: first pointer
 * @n: new data
 * Return: head pointer address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp, *new_node;

	temp = *head;

	new_node = malloc(sizeof(listint_t *));
	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	new_node->n = n;
	new_node->next = temp;

	*head = new_node;

	return (*head);
}


