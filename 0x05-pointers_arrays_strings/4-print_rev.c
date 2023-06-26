#include "main.h"

/**
 * print_rev - print reverse
 * @s: hold the string
 * Return: nothing
 */

void print_rev(char *s)
{
	int l, i;

	l = 0;
	for ( ; s[l] != '\0'; )
	{
		l += 1;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
