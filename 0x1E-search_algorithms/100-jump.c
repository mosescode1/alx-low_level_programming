#include "search_algos.h"
#include <math.h>



/**
 * min - checks for min value
 * @a: first value
 * @b: second value
 * Return: the lowest/min value
*/
size_t min(size_t a, size_t b)
{
	return ((a > b) ? b : a);
}
/**
 * jump_search - search a data structure by jumping it index
 * @array: the array to be searched
 * @size: size of the array to the searched
 * @value: target value in the search
 * Return: Found when target value is present otherwise (-1)
*/
int jump_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value)
{
	size_t prev, step;

	prev = 0;
	step = sqrt(size);

	if (array == NULL)
		return (-1);
	/**
	 * Checks if the value is in any of the block
	* in an array
	*/
	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		/*If the prev equal array size then the value isnt present*/
		if (prev >= size)
			return (-1);
	}
	/*If value is in an expected block a linear search is made*/
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		/* value not found*/
		if (prev == min(step, size))
		{
			return (-1);
		}
	}


	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}

