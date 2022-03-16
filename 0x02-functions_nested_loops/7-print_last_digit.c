#include "main.h"
/**
* print_last_digit - Prints last digit
* @n: digit in the last place
*
* Return: On Success 1
* On error, returns -1, and errno is set appropriately
*Returns the value of the last digit
*/

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if(a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
