#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - print numbers
  * @separator: string
  * @n:number of agument
  *
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argc;
	unsigned int i;
	char *s;

	va_start(argc, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(argc, char*);
	if (separator == NULL)
	{
		printf("%s", s);
	}
	else
	{
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	}
	}
		printf("\n");
}
