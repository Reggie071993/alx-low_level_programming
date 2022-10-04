#include "search_algos.h"

/**
 * linear_search - check in array a value and return index
 * @array: array to check
 * @size: size of the array
 * @value: value to find
 * Return: The index if success or -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
