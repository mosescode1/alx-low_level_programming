#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	size_t prev, step, i;

	prev = 0;
	step = sqrt(size);

	if (array == NULL || size == 0)
					return (-1);

	while (array[min(step, size) - 1] < value)
	{
					printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
					prev = step;
					step += sqrt(size);
					if (prev >= size)
									return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, min(step, size));

	for (i = prev; i < min(step, size); i++)
	{
					printf("Value checked array[%lu] = [%d]\n", i, array[i]);
					if (array[i] == value)
					{
									printf("Found %d at index: %lu\n", value, i);
									return (i);
					}
	}

	return (-1);
}