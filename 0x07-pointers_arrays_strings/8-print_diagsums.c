#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print diagonals sum
 * @a: diagonal
 * @size: size
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int  i, f_d_sum = 0, s_sum = 0;

	for (i = 0; i < size; i++)
	{
		f_d_sum = f_d_sum + a[i * size + i];
		s_sum = s_sum + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", f_d_sum, s_sum);
}
