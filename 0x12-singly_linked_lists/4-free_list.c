#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free all link lis
 * @head: node pointer
 */

void free_list(list_t *head)
{
	list_t *current;
	

	while((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
