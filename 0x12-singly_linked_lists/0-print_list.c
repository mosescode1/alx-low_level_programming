#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


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
