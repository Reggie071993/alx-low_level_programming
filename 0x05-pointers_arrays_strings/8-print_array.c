#include<stdio.h>
/**
* print_array - takes a pointer to an int as parameter
* updates the value it points to to 98
* @a: number pointer
* @n: number
* Return: 1 or 0
*/

void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
