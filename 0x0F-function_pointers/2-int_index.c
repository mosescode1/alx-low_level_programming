#include <stddef.h>
#include "function_pointers.h"
/**
* int_index - function
* @array: array pointer
* @size: size of array
* @cmp: call back function pointer
* Return: 0 or otherwise
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && size >= 0 && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	else
	{
		return (-1);
	}
	return (-1);
}
