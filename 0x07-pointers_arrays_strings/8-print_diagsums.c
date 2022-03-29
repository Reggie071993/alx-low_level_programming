#include <stdio.h>
#include <math.h>
#include "main.h"
/**
* print_diagsums - a function that print the sum of two diagonals
* @a: matrix
* @size: length of matrice
* Return: void
*/

void print_diagsums(int *a, int size)
{
	int row, *pos;
	int sum1 = 0;
	int sum2 = 0;

	for (pos = a, row = 0; row < size; ++row, pos += size + 1)
		sum1 += *pos;
	for (pos = a + size - 1, row = 0; row < size; ++row, pos += size - 1)
		sum2 += *pos;

	printf("%d, %d\n", sum1, sum2);
}
