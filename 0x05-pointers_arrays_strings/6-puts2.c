#include "main.h"
/**
* puts2 - takes a pointer to an int as parameter
* @str: chain of characters
* 
* Return: 1 or 0
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n')
}
