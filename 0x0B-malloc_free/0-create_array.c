#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array size and assign it with a specific char c
 * @c: The char size used to initialize
 * @size: The size of the array
 *
 * Return: Pointer to Array of chars, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
