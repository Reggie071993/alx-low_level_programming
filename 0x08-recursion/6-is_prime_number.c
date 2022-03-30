#include "main.h"
#include <stdio.h>
/**
* prime - function that prints a prime number
* @n: number
* @i: number
* Return: 0
*/

int prime(int n, int i)
{
	if (i > 1)
	{
		if (n % i == 0)
			return (0);
		else
			return (prime(n, i - 1));
	}
	else
		return (1);
}

/**
* is_prime_number - function that returns 1 if integer is a prime number
* @n: the number
* Return: 0.
*/

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);

	return (prime(n, n - 1));
}
