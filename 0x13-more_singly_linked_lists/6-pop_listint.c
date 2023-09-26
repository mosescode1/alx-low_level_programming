#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - pop off the previous head
 * @head: head pointer
 * Return: data at the head
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp, *ptr;

	if (*head == NULL)
		return (0);
	temp = *head;
	ptr = *head;
	n = temp->n;

	temp = temp->next;
	*head = temp;
	free(ptr);
	return (n);
}
