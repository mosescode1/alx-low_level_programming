#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: parameter
 *
 * Return: On success, returns a pointer to a newly allocated space in memory,
 *         containing the concatenated string.
 *         On failure, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	int length1 = 0, length2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;

	if (n >= length2)
	{
		n = length2;
	}

	concatenated = malloc(sizeof(char) * (length1 + length2 + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < n; j++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}

