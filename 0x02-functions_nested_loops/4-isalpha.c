#include "main.h"
#include <stdio.h>
/**
* -isalpha - test whether a character is from alphabet
* @c: character to check
*
* Return: 1 character from the alphabet
* Return: 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
