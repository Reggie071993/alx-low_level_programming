#include "main.h"
/**
* swap_int - swaps the values of two integers
* @a: integer addresse
* @b: integer addresse
*
* Return: 1 or 0
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
