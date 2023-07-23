#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct p - ..
 * @fmt: ..
 * @ptr: ..
 */

typedef struct p
{
	char fmt;
	void (*ptr)(va_list argc);
} _p;
#endif
