#include "main.h"

/**
* *cap_string - capitalizing alphabets
* @str: input value
* Return: str
*/

char *cap_string(char *str)
{
	int i = 0;
	int is_new_word = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			is_new_word = 1;
		}
		else if (is_new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'z');
			is_new_word = 0;
		}
		else
		{
			is_new_word = 0;
		}
	}
	return (str);
}
