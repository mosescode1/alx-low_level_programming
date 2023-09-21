#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - fucntion for printing list
 * @h: pointer to the struct member
 * Return: number of node avalable
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num);
}
