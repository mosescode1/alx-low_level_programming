#include "main.h"

/**
 * print_last_digit - getting the last digit of a number
 * @number: number to be checked
 *
 * Return: lastnumber
 */
int print_last_digit(int number)
{
	int lastnumber;

	if (number > 0)
	{
		lastnumber = number % 10;
	}
	else
	{
		lastnumber = -1 * (number % 10);
	}
		_putchar('0' + lastnumber);
		return (lastnumber);
}
