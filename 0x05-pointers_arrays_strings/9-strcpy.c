#include "main.h"

/**
* *_strcpy - function that copy a string address
* @dest: point to the buffer
* @src: string to be copied
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
