#include "main.h"

/**
* _isupper - function that checks if alphabets are in upper case
*
*@c: parameter to be checked
* Return: 1 if c is in uppercase , otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
