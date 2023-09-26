#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum all data in node
 * @head: head pointer to the first node
 * Return: sum of data node
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
