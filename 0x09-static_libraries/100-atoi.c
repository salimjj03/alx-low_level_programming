#include "main.h"

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
