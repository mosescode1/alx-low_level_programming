#include <stdio.h>

void my_constructor_function(void) __attribute__((constructor));

void my_constructor_function(void) {
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

