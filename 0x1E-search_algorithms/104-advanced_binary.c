#include "search_algos.h"


/**
 * binary_search_recursive - Recursively searches for a value in a sorted array
 * using binary search
 * @array: Pointer to the first element of the array to search in
 * @low: Starting index of the current search range
 * @high: Ending index of the current search range
 * @value: Value to search for
 * Return: The index where @value is located, or -1 if not present
 */
int binary_search_recursive(int *array, int value,
			    size_t low, size_t high)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%i%s", array[i], i == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursive(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursive(array, value,
							low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if
 *	value is not present in array or if array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, value, low, high));
}
