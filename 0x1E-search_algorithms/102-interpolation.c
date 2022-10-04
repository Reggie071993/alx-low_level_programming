#include "search_algos.h"
#include <math.h>

/**
 *interpolation_search - function that  searches
 *for a value in a sorted array of integers
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (array == NULL)
		return (-1);
	while ((array[high] != array[low]) &&
			(value >= array[low]) && (value <= array[high]))
	{
		mid = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (value == array[mid])
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}
	if (array[low] == value)
		return (low);
	mid = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
}
