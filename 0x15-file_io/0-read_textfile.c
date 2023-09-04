#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
  * read_textfile - ...
  * @filename: ...
  * @letters: ...
  *
  * Return: ...
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t data, r;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	n = open(filename, O_RDONLY);
	if (n == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(n);
		return (0);
	}
	r = read(n, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		close(n);
		return (0);
	}
	data = write(1, buffer, r);
	if (data < 0 || data != r)
	{
		free(buffer);
		close(n);
		return (0);
	}
	free(buffer);
	close(n);
	return (data);
}

