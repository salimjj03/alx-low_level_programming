#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sum all agument
  * @n: count the agument
  *
  * Return: int
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list argc;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(argc, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(argc, int);
	}
		return (sum);
}
