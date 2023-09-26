#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - node at a specific index.
* @head: a pointer to the head of the linked list.
* @idx: insert the new node (0-based).
* @n: The value to store in the new node.
* Return: NULL on failure.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *newNode;
unsigned int i = 0;

temp = *head;

if (idx == 0)
{
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = temp;
*head = newNode;
return (newNode);
}

while (temp != NULL)
{
if (i == idx - 1)
{
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = temp->next;
temp->next = newNode;
return (newNode);
}

temp = temp->next;
i++;
}

return (NULL);
}
