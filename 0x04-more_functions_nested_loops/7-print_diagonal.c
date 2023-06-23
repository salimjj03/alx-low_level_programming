#include "main.h"

/**
 * print_diagonal - print lines
 * @n: length of the line
 * Return: none (void)
 */

void print_diagonal(int n)
{
	int j;

	if (n > 0)
	{
	for (j = 0; j < n; j++)
	{
	int i;

	for (i = 1; i <= j; i++)
	{
		_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
