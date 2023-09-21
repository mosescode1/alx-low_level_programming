## README

**Linked List Functions in C**

This repository contains four functions for working with linked lists in C:

**1. print_list**

Prints all the elements of a list_t list, returning the number of nodes in the list. If the str member of a node is NULL, prints "[0] (nil)".

**2. list_len**

Returns the number of elements (nodes) in a list_t list.

**3. add_node**

Adds a new node at the beginning of a list_t list, returning the address of the new element, or NULL if it fails. The str in the new node is a duplicate of the provided string.

**4. add_node_end**

Adds a new node at the end of a list_t list, returning the address of the new element, or NULL if it fails. The str in the new node is a duplicate of the provided string.

**5. free_list**

Frees all the memory allocated for a list_t list.

**Usage**

To use the functions, first include the header file `linked_list.h`:

```c
#include "linked_list.h"
```

Then, create a new list_t list:

```c
list_t *list = create_list();
```

To add elements to the list, use the `add_node()` or `add_node_end()` function. For example, to add the string "Hello, world!" to the beginning of the list, you would do the following:

```c
list_t *node = add_node(list, "Hello, world!");
```

To print the list, use the `print_list()` function:

```c
int num_nodes = print_list(list);
```

The `num_nodes` variable will contain the number of nodes in the list.

To free the list, use the `free_list()` function:

```c
free_list(list);
```

**Example**

The following example shows how to use the linked list functions to create a simple linked list and print its contents:

```c
#include <stdio.h>
#include "linked_list.h"

int main() {
  // Create a new list.
  list_t *list = create_list();

  // Add some elements to the list.
  add_node(list, "Hello");
  add_node(list, "world!");

  // Print the list.
  int num_nodes = print_list(list);

  // Free the list.
  free_list(list);

  return 0;
}
```

Output:

```
[0] Hello
[1] world!
```
