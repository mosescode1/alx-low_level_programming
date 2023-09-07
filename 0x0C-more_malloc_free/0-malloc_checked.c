#include "main.h"
#include <stdio.h>
/**
* malloc_checked - Entry point
* @b: parameter
* Return: ptr(pointer)
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
