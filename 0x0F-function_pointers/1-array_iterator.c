#include "function_pointers.h"

/**
 * array_iterator - executa a function of ecach element of array
 * @array: array pointer
 * @size: size of array
 * @action: call back function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && (*action) != NULL)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
	
}
