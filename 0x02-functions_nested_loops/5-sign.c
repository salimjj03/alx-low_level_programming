#include "main.h"


/**
 * print_sign - check for sign
 * @n: character tobe check
 * Return: if @n is > 0 print +, if @n < 0 print - otherwise 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
