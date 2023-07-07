#include "main.h"

/**
 * _puts - print string to stdout-put
 * @s: the string
 * Return: nothing
 */

void _puts(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts(s + 1);
	}
}
