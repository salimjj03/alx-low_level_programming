#include "main.h"


/**
 * print_last_digit - print last digit of a number
 * @n: hold the last digit
 * Return: print last digit
 */
int print_last_digit(int n)
{
	int j = n % 10;
	
	if (j < 0)
	{
		j = j * -1;
	}
	return j;
}
