#include "main.h"


/**
 * print_alphabet_x10 - print ahphabet 10 times
 *
 * Return: none (void)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
		_putchar('\n');
	}
}
