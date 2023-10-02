#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
* read_textfile - reads text of a file
* @filename: the file to be read
* @letters: the number alphabets to be read
* Return: numbs of alphabets
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = NULL;
	char buffer[1024];
	ssize_t lettersread, bytesread, byteswritten, bytestowrite;

	lettersread = 0;

	file = fopen(filename, "r");
	if (filename == NULL || file == NULL)
	{
		return (0);
		exit(1);
	}
	while (letters > 0)
	{
		bytesread = fread(buffer, 1, sizeof(buffer), file);
		if (bytesread <= 0)
		{
			if (feof(file))
				break;
			else if (ferror(file))
			{
				fclose(file);
				return (0);
			}
		}
		if ((ssize_t)letters < bytesread)
			bytestowrite = (ssize_t)letters;
		else
			bytestowrite = (ssize_t)bytesread;
		 byteswritten = write(STDOUT_FILENO, buffer, bytestowrite);
		if (byteswritten != bytestowrite)
		{
			fclose(file);
			return (0);
		}
		lettersread += byteswritten;
		letters -= byteswritten;
	}
	fclose(file);
	return (lettersread);
}
