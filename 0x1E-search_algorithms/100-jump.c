#include "search_algos.h"
#include <math.h>


size_t min(size_t i, size_t j);

/**
 * min - return minimum of two values
 * @i: first value
 * @j: second value
 * Return: `a` if lower or equal to `b`
 */

size_t min(size_t i, size_t j)
{
	return (i <= j ? i : j);
}


/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if
 *	value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev, high, step;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     prev = high, high += step)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, high);

	for (; prev <= min(high, size - 1); prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
