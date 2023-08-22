#include "main.h"
#include <stdio.h>

/**
* print_array - printing arrays
* @a: parameter to be passed
* @n: number of time the array prints
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
