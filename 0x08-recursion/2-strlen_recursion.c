#include "main.h"
static int taille = 1;
/**
* _strlen_recursion - function that returns the lenght of a string
* @s: string
* Return: 0.
*/

int _strlen_recursion(char *s)
{
	if (s[taille] != '\0')
	{
		taille++;
		_strlen_recursion(s);
	}
	return (taille);
}
