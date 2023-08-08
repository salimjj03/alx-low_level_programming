#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

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
	int file, p_w;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	p_w = write(file, text_content, _strlen(text_content));
	if (p_w == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
