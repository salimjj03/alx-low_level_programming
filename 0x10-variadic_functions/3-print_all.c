#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * i - ...
 * @argc:..
 * Return: ...
 */

void i(va_list argc)
{
	printf("%d", va_arg(argc, int));
}

/**
 * c - ..
 * @argc:..
 * Return: ...
 */

void c(va_list argc)
{
	printf("%c", va_arg(argc, int));
}

/**
 * f - ...
 * @argc: ..
 * Return:...
 */

void f(va_list argc)
{
	printf("%f", va_arg(argc, double));
}

/**
 * s - ..
 * @argc: ..
 * Return: ..
 */

void s(va_list argc)
{
	char *arg = va_arg(argc, char *);

	if (arg == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", arg);
}

/**
 * print_all - ...
 * @format: ...
 * Return: ..
 */

void print_all(const char * const format, ...)
{
	va_list argc;
	int x, y;
	_p value[] = {
		{'i', i},
		{'c', c},
		{'f', f},
		{'s', s}
	};
	va_start(argc, format);
	x = 0;
	while (format[x] != '\0')
	{
	y = 0;
	while (y < 5)
	{
	if (format[x] == value[y].fmt)
	{
		value[y].ptr(argc);
	}
		y++;
	}
		x++;
	}
		va_end(argc);
		printf("\n");
}
