#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free all node
 * @head: pointer to the base address
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}


