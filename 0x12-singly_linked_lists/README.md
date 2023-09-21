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

