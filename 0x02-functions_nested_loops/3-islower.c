#include "main.h"
/**
* _islower - test whether a character is a lowercase letter
* @c: character
*
* Return: 1 a lowercase letter, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
