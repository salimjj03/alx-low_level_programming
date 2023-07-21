#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - print numbers
  * @separator: string
  * @n:number of agument
  *
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argc;
	unsigned int i;
	int v;

	va_start(argc, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(argc, int);
	if (separator == NULL)
	{
		printf("%d", v);
	}
	else
	{
		printf("%d", v);
	if (i < n - 1)
	{
		printf("%s", separator);
	}
	}
	}
		printf("\n");
}
