#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ldo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldo = n % 10;
	printf("Last digit of %d is ", n);

	if (ldo > 5)
	{
		printf("%d and is greater than 5\n", ldo);
	}
	else if (ldo == 0)
	{
		printf("%d and is 1\n", ldo);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", ldo);
	}
	return (0);
}

