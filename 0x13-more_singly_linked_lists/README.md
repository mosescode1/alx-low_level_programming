# Project README - 0x13. More singly linked lists

## General Requirements
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All source code files should end with a new line
- A README.md file, at the root of the project folder, is mandatory
- Code should follow the Betty style, with checks using betty-style.pl and betty-doc.pl
- Not allowed to use global variables
- No more than 5 functions per file
- Only C standard library functions allowed are malloc, free, and exit; use of functions like printf, puts, calloc, realloc, etc. is forbidden
- Allowed to use `_putchar`
- Don't push `_putchar.c`; it will not be taken into account
- Prototypes of all functions and `_putchar` should be included in a header file named `lists.h`; don't forget to push the header file
- All header files should be include-guarded

## More Info
Please use the following data structure for this project:

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
Tasks
0. Print list (mandatory)
Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);

Return: the number of nodes

Format: see example

You are allowed to use printf

Example:

julien@ubuntu:~/0x13. More singly linked lists$ cat 0-main.c 
```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
```

compile with julien@ubuntu:~/0x13. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a

julien@ubuntu:~/0x13. More singly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/0x13. More singly linked lists$


Repository:

GitHub repository: alx-low_level_programming
Directory: 0x13-more_singly_linked_lists
File: 0-print_listint.c
