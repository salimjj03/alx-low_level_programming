#include "main.h"

/**
 * print_square - print lines
 * @size: length of the line
 * Return: none (void)
 */

void print_square(int size)
{
	int j;
	int i;

	if (size > 0)
	{
	for (j = 0; j < size; j++)
	{
		_putchar('#');

	for (i = 1; i < size; i++)
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
