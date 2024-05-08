#include "search_algos.h"

/**
 * min - returns the minimum of two values
 * @i: first value
 * @j: second value
 * Return: `i` if lower or equal to `j`
 */

size_t min(size_t i, size_t j)
{
	return (i <= j ? i : j);
}

/**
 * search_binary - Searches for a value in a sorted array using binary search
 * within a specific range
 * @array: Pointer to the first element of the array to search in
 * @value: Value to search for
 * @low: Starting index of the search range
 * @high: Ending index of the search range
 * Return: The index where @value is located, or -1 if not present
 */

int search_binary(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: %d", array[low]);

		for (i = low + 1; i <= high; i++)
			printf(", %d", array[i]);
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if
 *	value is not present in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (search_binary(array, value, low, high));
}
