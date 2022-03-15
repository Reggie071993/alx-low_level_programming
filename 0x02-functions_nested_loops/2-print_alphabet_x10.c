#include "holberton.h"

/**
* print_alphabet_X10 - repeats the print alphabet 10 times.
*
* Return: Nothing.
*/

void print_alphabet_X10(void)
{
        int i;
        char c;
        /* your code goes there */
        for (i = 0; i < 10; ++i)
        {
                for (c = 'a'; c <= 'z'; c++)
                {
                        _putchar (c);
                }
                _putchar('\n');
        }
}
