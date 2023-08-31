#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * find_v - ....
  * @n: ..
  * Return: .....
  */

void find_v(unsigned long int n)
{
	if (n < 1)
	{
		return;
	}
	find_v(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

/**
  * print_binary - ......
  * @n: ......
  * Return: ...
  */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	find_v(n);
}
