#include "main.h"

void reverse_array(int *a, int n)
{
	int j, i, tem;

	for (j = 0; j < n; j++)
	{
	tem = a[j];
	}
	for (i = n; i >= 0; i--)
	{
		a[n-i] = tem[i];
	}
}
