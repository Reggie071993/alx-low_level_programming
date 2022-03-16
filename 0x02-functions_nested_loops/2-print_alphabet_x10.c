
#include "main.h"
#include <stdio.h>
/**
* print_alphabet_X10 - repeats the print alphabet 10 times.
*
* Return: 0 on Success.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet_X10(void)
{
        int i;
        char c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
