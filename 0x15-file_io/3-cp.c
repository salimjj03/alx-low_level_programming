#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * cp - ...
  * @src: ...
  * @dest: ...
  *
  * Return: ...
  */

void cp(const char *src, const char *dest)
{
	int file1, file2, r;
	char buffer[1024];

	file1 = open(src, O_RDONLY);
	if (!src || file1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	file2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(file1, buffer, 1024)) > 0)
	{
		if (write(file2, buffer, r) != r || file2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (close(file1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file1);
		exit(100);
	}
	if (close(file2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
}

/**
  * main - ..
  * @argc: ....
  * @argv: .....
  *
  * Return: ...
  */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	exit(0);
}
