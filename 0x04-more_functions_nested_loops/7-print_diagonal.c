#include "main.h"
/**
* print_diagonal - prints diagonal line
* #n: integer
* Return: Always 0.
*/

void print_diagonal(int n)
{
	int i = 0, k = 0;

	if (n > 0)
	{
		while (k < n)
		{
			while (i < k)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			i = 0;
			k++;
		}
	}
	else
		_putchar('\n');

}
