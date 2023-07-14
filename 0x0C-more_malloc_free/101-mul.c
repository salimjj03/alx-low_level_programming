#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - print string to stdout-put
 * @s: the string
 * Return: nothing
 */

void _puts(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts(s + 1);
	}
}

/**
 * _atoi - convert string to integer
 * @s: the string
 * Return: int
 */

int _atoi(char *s)
{
	int j, i, n, _int = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] >= '0' && s[i] <= '9')
	{
		n = s[i] - '0';
		_int = _int * 10 + n;
	if (s[i + 1] < '0' || s[i + 1] > '9')
	{
		break;
	}
	}
	}
	for (j = 0; s[j] != '\0'; j++)
	{
	if (s[j - 1] == '-')
	{
		_int = _int * -1;
	}
	}
		return (_int);
}

/**
 * _isdigit - check @c if it's digit
 * @c: character to be check
 * Return: if @c is upper digit 1 else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main - print name of the program
 * @argc: count argv
 * @argv: the array
 * Return: argv
 */

int main(int argc, char *argv[])
{
	char s[] = "Error";
	int i, j, *p;

	if (argc != 3)
	{
		_puts(s);
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
	for (j = 0; j < argv[i][j]; j++)
	{
	if (!_isdigit(argv[i][j]))
	{
		_puts(s);
		exit(98);
	}
	}
	}
	p = (int *)malloc(sizeof(int));
	if (p == NULL)
	{
		_puts(s);
		exit(98);
	}
	*argv[1] = _atoi(argv[1]);
	*argv[2] = _atoi(argv[2]);
	*p = (*argv[1]) * (*argv[2]);
	printf("%d\n", *p);
	free(p);
		return (0);
}
