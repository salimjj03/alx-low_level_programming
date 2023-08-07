#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
  * read_textfile - ...
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t b_w, b_r;
	char *m_ptr;

	if (filename == NULL)
	{
		return (0);
	}
	m_ptr = malloc(letters + 1);
	if (m_ptr == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	b_r = read(file, m_ptr, letters);
	if (b_r == -1)
	{
		free(m_ptr);
		close(file);
		return (0);
	}
	b_w = write(1, m_ptr, b_r);
	if (b_w == -1)
	{
		free(m_ptr);
		close(file);
		return (0);
	}
	free(m_ptr);
	close(file);
	return (b_r);
}
