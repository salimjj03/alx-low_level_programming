#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - perform simple operation
  * @argc: size of array
  * @argv: the array
  *
  * Return: int
  */

int main(int argc, char *argv[])
{
	int calc, num1, num2;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = operator(num1, num2);
	printf("%d\n", calc);
	return (0);
}
