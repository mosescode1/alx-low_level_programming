#include "main.h"
/**
 * _islower - used to check if an alphabet is in lowercase
 *
 * Description: int _islower(int c) check if the member 'c' is in lowercase
 * @c: The character to be checked.
 * Return: 1 if c is a lowercase , 0 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
