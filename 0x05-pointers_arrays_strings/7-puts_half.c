"include "main.h"
/**
* puts_half - takes a pointer to an int as parameter
* @str: chain of character
*Return: 1 or 0
*/

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n')
}
