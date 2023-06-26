#include "main.h"

/**
 * _puts - print string to the stdout put
 * @str: point to the  string
 * Return: nothing
 */

void _puts(char *str)
{
	for ( ; *str != '\0'; str++)
	{
		_putchar(*str);
	}
		_putchar('\n');
}
