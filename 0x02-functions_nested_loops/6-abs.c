#include "main.h"
/**
* _abs - Computes absolute value of the number from zero
* @n: The number
*
* Return: On Success 1.
*On error, -1 is returned, and errno is set appropriately.
*Returns abs of the number
*/

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
