#include "main.h"
/**
* print_diagsums - a function that print the sum of two diagonals
* @a: matrix
* @size: length of matrice
* Return: 1 or 0
*/


void print_diagsums(int *a, int size)
{
	int	i =0, som1 = 0, som2 = 0;

	for (i = 0; i < size; i++)
	{
		som1 = som1 + (*a)[i][i];
		som2 = som2 + (*a)[size -1 -i][size -1 -i];
	}
	printf("%d, %d",som1,som2);
}
