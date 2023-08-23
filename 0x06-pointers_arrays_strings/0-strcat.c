#include "main.h"

/**
* *_strcat - concat two string
* @dest: string 1
* @src: string 2
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		dest++;
	}

	while (src[j] != '\0')
	{
		dest[i} = src[i];
		i++;
		j++;
	}
	dest[i] '\0';
	return (dest);
}
