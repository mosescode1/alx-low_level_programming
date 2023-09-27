#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prevNode;
	listint_t *nextNode;

	prevNode = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && prevNode != NULL; i++)
		{
			prevNode = prevNode->next;
		}
	}

	if (prevNode == NULL || (prevNode->next == NULL && index != 0))
	{
		return (-1);
	}

	nextNode = prevNode->next;

	if (index != 0)
	{
		prevNode->next = nextNode->next;
		free(nextNode);
	}
	else
	{
		free(prevNode);
		*head = nextNode;
	}

	return (1);
}
