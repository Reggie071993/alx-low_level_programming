#include "main.h"
/**
* _puts - takes a pointer to an int as parameter
* @str: chain of character
*
* Return: 1 or 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');
}
