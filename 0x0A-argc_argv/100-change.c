#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to make change for an amount of money
 * @argc: cout argv
 * @argv: the string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, ch[5] = {25, 10, 5, 2, 1}, a;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("%d\n", sum);
	}
	else
	{
	for (i = 0; i < 5; i++)
	{
	if (a / ch[i] > 0)
	{
	if (a == 0)
	{
		sum = sum + a / ch[i];
		break;
	}
	else
	{
		sum = sum + a / ch[i];
		a = a % ch[i];
		i = 0;
	}
	}
	}
		printf("%d\n", sum);
	}
	}
		return (0);
}
