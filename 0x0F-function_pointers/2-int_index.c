#include "function_pointers.h"
#include <stdlib.h>

/**
  * int_index - scharches int
  * @array:the array
  * @size: size of array
  * @cmp: pointer to function
  *
  * Return: int
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	{
		return (i);
	}
	}
	}
		return (-1);
}
