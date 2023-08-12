#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num[] = "0123456789";

	for (int i = 0; i < 10 ; i++)
	{
		putchar(num[i]);
	}

	putchar('\n');
	return (0);
}
