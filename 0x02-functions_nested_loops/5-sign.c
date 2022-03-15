#include "main.h"

/**
* print_sign - Determines integer is positive, negative or zero
* @n: The integer
*
*Return 1 if positive
* Return 0 if zero
* Return -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		-putchar('-');
		return (-1);
	}
}
