#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adding node at the end of the list
 * @head: double pointer
 * @str: copied string
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		return (NULL);
		free(temp);
	}

	temp->len = strlen(str);
	temp->next = NULL;
	ptr = *head;

	if (ptr == NULL)
		*head = temp;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (*head);
}
