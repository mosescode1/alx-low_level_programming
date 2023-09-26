#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp, *ptr;

	temp = *head;
	ptr = *head;
	n = temp->n;
	if (temp == NULL)
		return (0);

	temp = temp->next;
	*head = temp;
	free(ptr);
	return (n);
}
