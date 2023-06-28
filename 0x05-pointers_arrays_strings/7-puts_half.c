#include "main.h"

/**
 * puts_half -  prints half of a string
 * @str: poit the string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, len = 0;
	char half, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		len += 1;
	}
	for (j = 0; j < len / 2; j++)
	{
	if (len % 2 == 0)
	{
		half = str[(len / 2) + j];
		_putchar(half);
	}
	else
	{
		n =  str[((len - 1) / 2) + j];
		_putchar(n);
	}
	}
		_putchar('\n');
}
