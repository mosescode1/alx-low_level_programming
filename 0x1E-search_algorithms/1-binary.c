#include "search_algos.h"
#include <stddef.h>
/*
* a function that searches for a value in a sorted array of integers
* using the Binary search algorithm
*/

/**
 * binary_search - search for an element in an array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, high, low, i;

	if (array == NULL)
		return (-1);

	high = size - 1;
	low = 0;

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		/* if the value is at the mid point*/
		if (value == array[mid])
			return (mid);

		printf("Searching in array: ");
		for (i = 0; i <= high; i++)
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		printf("\n");

		/* check which part  of the divided array should be used*/
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
