#include "main.h"

/**
 * print_diagonal - print lines
 * @n: length of the line
 * Return: none (void)
 */

void print_diagonal(int n)
{
	int j;

	for (j = 1; j <= n; j++)
	{
	int i;

	for (i = j; i <= n; i++)
	{
	if (n > 0)
	{
		_putchar(' ');
	}
	else
	{
		_putchar('\n');
	}
	}
		_putchar('\\');
		_putchar('\n');
	}
}
