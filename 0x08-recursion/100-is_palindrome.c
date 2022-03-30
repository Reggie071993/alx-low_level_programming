#include "main.h"
#include <studio.h"
/**
* _strlen_recursion - function that returns the lenght of a string
* @s: string
* Return: 0.
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
* palindrome - function that returns empty string
* @s: string
* @obs: the number
* @i: the number
* Return: 0.
*/

int palindrome(char *s, int obs, int i)
{
	if (s[i] != '\0')
	{
		if (s[i] != s[obs - i])
			return (0);
		else
			return (palindrome(s, obs, i + 1));
	}
	else
		return (1);
}

/**
* is_palindrome - function that returns 1 string is palindrome otherwise 0
* @s: string
* Return: 0.
*/

int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);

	return (palidrone(s, _strlen_recursion(s) - 1, 0));
}
