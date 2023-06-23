#include "main.h"

/**
 * print_triangle - print lines
 * @size: length of the line
 * Return: none (void)
 */

void print_triangle(int size)
{
	int j;
	int i;
	int h;

	if (size > 0)
	{
	for (j = size; j > 0; j--)
	{
	for (i = j - 1; i > 0; i--)
	{
		_putchar(' ');
	}
	for (h = 0; h <= size - j; h++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
