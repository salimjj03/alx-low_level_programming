#include "main.h"


/**
 * print_alphabet - Prints the English alphabet in lowercase.
 *
 * This function prints the English alphabet in lowercase letters
 * from 'a' to 'z'. Each letter is printed on a new line.
 *
 * Return: None (void).
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z' ; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
