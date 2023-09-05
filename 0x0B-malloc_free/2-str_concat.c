#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatinating string
* @s1: string one
* @s2: string two
* Return: concat
*/

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0, len2 = 0;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concat[j + i] = s2[j];
	}
	concat[j + i] = '\0';
	return (concat);
}
