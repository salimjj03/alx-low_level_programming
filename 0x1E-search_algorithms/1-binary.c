#include "search_algos.h"

/**
 * binary_search - ......
 * @array:....
 * @size:.....@
 * @value: .....
 *
 * Return: ....
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, r = size - 1, mid = (l + r) / 2;

	if (array == NULL)
		return (-1);


	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else if (array[mid] < value)
			l = mid + 1;
		mid = (l + r) / 2;
	}
	return (-1);
}
