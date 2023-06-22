#include "main.h"

/**
 * print_line - print lines
 * @n: length of the line
 * Return: none (void)
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
	if (n > 0)
	{
		_putchar('_');
	}
	else
	{
		_putchar('\n');
	}
	}
		_putchar('\n');
}
