#include <stdio.h>
#include "main.h"

void print_diagsums(int *a, int size)
{
	int i, j;
       int	sum = 0;
       
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{

		sum = sum + a[i] + a[j];
	}
	}
	printf("%d\n", sum);
}
