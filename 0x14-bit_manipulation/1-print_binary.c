#include "main.h"
#include <stdio.h>

/**
  * find_binary - Prints the binary representation of a number
  * @n: The number to representing in binary
  *
  * Return: Nothing
  */

void find_binary(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		find_binary(n >> 1);
		if (n & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}

/**
  * print_binary - Prints the binary representation of a number
  * @n: The number to representing in binary
  *
  * Return: Nothing
  */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	find_binary(n);
}
