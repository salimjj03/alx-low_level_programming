#include "main.h"

/**
 * rev_string - print reverse
 * @s: hold the string
 * Return: nothing
 */

void rev_string(char *s)
{
	int l, start, end;

	l = 0;
	for ( ; s[l] != '\0'; )
	{
		l += 1;
	}
	end = l - 1;
	for (start = 0; start < end; start++)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		end--;
	}
}
