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
  * create_file - ...
  * @filename: ...
  * @text_content: ...
  *
  * Return: ...
  */

int create_file(const char *filename, char *text_content)
{
	int file_d;

	if (filename == NULL)
	{
		return (-1);
	}
	file_d = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_d == -1)
	{
		return (-1);
	}
	if (write(file_d, text_content, _strlen(text_content)) == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
