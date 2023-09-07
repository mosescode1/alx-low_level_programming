#include "main.h"

/**
* malloc_checked - Entry point
* @b: parameter
* Return: ptr(pointer)
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
