#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _strlen - find the length of a string
 * @s: string to be count
 * Return: return l
 */

int _strlen(char *s)
{
	 int l = 0;

	for ( ; *s != '\0'; s++)
	{
		l += 1;
	}
	return (l);
}

/**
  * append_text_to_file - ...
  * @filename: ...
  * @text_content: ...
  *
  * Return: ...
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;

	if (filename == NULL)
	{
		return (-1);
	}
	file_d = open(filename, O_RDWR | O_APPEND);
	if (file_d == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (write(file_d, text_content, _strlen(text_content)) == -1)
		{
			return (-1);
		}
	}
	return (1);
}
